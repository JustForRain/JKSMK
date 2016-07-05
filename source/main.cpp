#include <3ds.h>
#include <stdio.h>
#include <sf2d.h>
#include <sftd.h>
#include <string>
#include <cstdlib>

#include "sys.h"
#include "global.h"
#include "menu.h"
#include "titles.h"
#include "sd_cia.h"
#include "cart.h"
#include "hbfilter.h"
#include "util.h"
#include "3dsx.h"

enum
{
    _cart,
    _cia,
    _refresh

};

int main(int argc, const char * argv[])
{
    sysInit();

    hidScanInput();
    u32 held = hidKeysHeld();
    if((held & KEY_R) && (held & KEY_L))
        devMode = true;
    else if(held & KEY_R)
        gatewayMode = true;

    if(runningUnder() && !devMode)
        start3dsxMode();
    else
    {
        sdTitlesInit();
        nandTitlesInit();

        std::u32string info = U"JKSMK";
		
        menu mainMenu(136, 80, false);
        if(!gatewayMode)
            mainMenu.addItem("Cartridge");
        else
            mainMenu.addItem("Gateway cart");
        mainMenu.addItem("SD/CIA");
        mainMenu.addItem("Refresh");

        //I use this to break the loop from inside switches.
        //You could use a goto too, but I was always told goto is da devil
        bool loop = true;

        while(aptMainLoop() && loop && !kill)
        {
            hidScanInput();

            u32 up = hidKeysUp();

            mainMenu.handleInput(up);

            touchPosition p;
            hidTouchRead(&p);

            if(up & KEY_A)
            {
                switch(mainMenu.getSelected())
                {
                    case _cart:
                        cartManager();
                        break;
                    case _cia:
                        sdStartSelect();
                        break;
                    case _refresh:
                        FSUSER_DeleteFile(sdArch, fsMakePath(PATH_ASCII, "/3ds/data/JKSV/titles"));
                        sdTitlesInit();
                        break;
                }
            }
            else if(up & KEY_B)
                break;

            killApp(up);

            sf2d_start_frame(GFX_TOP, GFX_LEFT);
            drawTopBar(info);
            mainMenu.draw();
            sf2d_end_frame();

            sf2d_start_frame(GFX_BOTTOM, GFX_LEFT);
            sf2d_end_frame();

            sf2d_swapbuffers();
        }
    }

    sysExit();
    return 0;
}
