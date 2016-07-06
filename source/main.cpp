#include <3ds.h>
#include <stdio.h>
#include <sf2d.h>
#include <sftd.h>
#include <string>
#include <cstdlib>

#include "sys.h"
#include "global.h"
#include "menu.h"
#include "archive.h"
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
	{
        devMode = true;
		FS_Archive shared;
		if(openSharedExt(&shared, 0xf000000b))
		{
			Handle coin;
			FSUSER_OpenFile(&coin, shared, fsMakePath(PATH_ASCII, "/gamecoin.dat"), FS_OPEN_READ | FS_OPEN_WRITE, 0);

			u64 size;
			FSFILE_GetSize(coin, &size);

			u8 *buff = new u8[size];

			//Read file to buff
			FSFILE_Read(coin, NULL, 0, buff, size);

			//Overwrite 0x4 and 0x5 with 300
			unsigned coinAmount = 300;
			buff[0x4] = coinAmount;
			buff[0x5] = coinAmount >> 8;

			//write it back
			FSFILE_Write(coin, NULL, 0, buff, size, FS_WRITE_FLUSH);

			//close gamecoin.dat
			FSFILE_Close(coin);

			//free memory used by buff
			delete[] buff;

			FSUSER_CloseArchive(shared);
		}
	}
	else if(held & KEY_R)
    {
		gatewayMode = true;
	}
	
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
