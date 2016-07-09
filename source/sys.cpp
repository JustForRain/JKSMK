#include <3ds.h>
#include <stdio.h>
#include <sf2d.h>
#include <sftd.h>
#include <vector>

#include "font_ttf.h"
#include "img.h"
#include "global.h"
#include "textbox.h"
#include "ui.h"
#include "menu.h"
#include "util.h"
#include "titles.h"
#include "hbfilter.h"

extern std::vector<u32> filterID;

void loadImgs()
{
    bar = sf2d_create_texture_mem_RGBA8(TopBar.pixel_data, TopBar.width, TopBar.height, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    textboxInit();
    progressBarInit();
    loadArrow();
}

void freeImgs()
{
    sf2d_free_texture(bar);
    textboxExit();
    progressBarExit();
    freeArrow();
}

void loadCol()
{
    FILE *colBin = fopen("/3ds/data/JKSV/colBin", "rb");

    for(int i = 0; i < 3; i++)
        clearColor[i] = fgetc(colBin);
    for(int i = 0; i < 3; i++)
        selColor[i] = fgetc(colBin);
    for(int i = 0; i < 3; i++)
        unSelColor[i] = fgetc(colBin);

    fclose(colBin);
}

void changeBuffSize()
{
    FILE *bSize = fopen("/3ds/data/JKSV/buff_size", "rb");

    buff_size = 0;
    for(int i = 0; i < 4; i++)
        buff_size += (fgetc(bSize) << (8 * i));

    fclose(bSize);
}

//I just use this so I don't have to type so much. I'm lazy
void createDir(const char *path)
{
    FSUSER_CreateDirectory(sdArch, fsMakePath(PATH_ASCII, path), 0);
}

void sysInit()
{
    if(fexists("/3ds/data/JKSV/colBin"))
        loadCol();
    if(fexists("/3ds/data/JKSV/buff_size"))
        changeBuffSize();

    loadFilterList();

    //Start sf2d
    sf2d_init();
    //Set clear to black
    sf2d_set_clear_color(RGBA8(clearColor[0], clearColor[1], clearColor[2], 255));

    sf2d_set_3D(0);

    //Load graphics needed
    loadImgs();

    //Start sftd
    sftd_init();
    //Load font
    if(fexists("/3ds/data/JKSV/font.ttf"))
        font = sftd_load_font_file("/3ds/data/JKSV/font.ttf");
    else
        font = sftd_load_font_mem(font_ttf, font_ttf_size);

    //Start 3ds services
    amInit();
    aptInit();
    srvInit();
    hidInit();

    //Open SDMC archive
    Result Res = FSUSER_OpenArchive(&sdArch, ARCHIVE_SDMC, fsMakePath(PATH_EMPTY, ""));
    if(Res)
    {
        showMessage("Error opening SDMC archive!");
    }

    //Create output directories
    createDir("/3ds");
    createDir("/3ds/data");
    createDir("/3ds/data/JKSV");
    createDir("/3ds/data/JKSV/Saves");
    createDir("/3ds/data/JKSV/Boss");
	
}

void sysExit()
{
    //Close SDMC
    FSUSER_CloseArchive(sdArch);

    //exit services
    amExit();
    aptExit();
    srvExit();
    hidExit();

    freeImgs();

    sdTitle.clear();
    nandTitle.clear();
    filterID.clear();

    sftd_free_font(font);
    sftd_fini();
    sf2d_fini();
}
