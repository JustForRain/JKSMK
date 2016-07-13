#include <3ds.h>
#include <sf2d.h>
#include <sftd.h>
#include <stdio.h>
#include <string>
#include <vector>

#include "titles.h"
#include "menu.h"
#include "global.h"
#include "util.h"
#include "archive.h"
#include "backup.h"
#include "restore.h"
#include "ui.h"
#include "button.h"
#include "textbox.h"
#include "auto.h"
#include "slot.h"
#include "savemenu.h"

void sdBackupMenu(const titleData dat);

void sdStartSelect()
{
    if(sdTitle.size() < 1)
        return;

    menu titleMenu(-30, 20, true);
    for(unsigned i = 0; i < sdTitle.size(); i++)
        titleMenu.addItem(sdTitle[i].name);

    bool loop = true;

    //Info draw on top of bar
    std::u32string info = U"Select a title";

    //help text for help button
    std::string helpText = "Press L to select multiple, R to select all. Press Y to export or X to import selected titles.";

    //Help button
    button help("Help", 224, 208);

    while(loop && !kill)
    {
        hidScanInput();

        u32 up = hidKeysUp();

        titleMenu.handleInput(up);

        touchPosition pos;
        hidTouchRead(&pos);

        if(up & KEY_A)
        {
            unsigned selected = titleMenu.getSelected();
            sdBackupMenu(sdTitle[selected]);
        }
        else if(help.released(pos))
        {
            showMessage(helpText.c_str(), "Help...");
        }
        else if(up & KEY_Y)
        {
            autoBackup(titleMenu);
        }
        else if(up & KEY_X)
        {
            autoRestore(titleMenu);
        }
        else if(up & KEY_B)
            break;

        killApp(up);

        sf2d_start_frame(GFX_TOP, GFX_LEFT);
            drawTopBar(info);
            titleMenu.draw();
        sf2d_end_frame();

        sf2d_start_frame(GFX_BOTTOM, GFX_LEFT);
            sdTitle[titleMenu.getSelected()].printInfo();
            help.draw();
        sf2d_end_frame();

        sf2d_swapbuffers();
    }
}

enum
{
    _expSav,
    _impSav,
	_delSav
};

void sdBackupMenu(const titleData dat)
{
    menu backupMenu(128, 80, false);
    backupMenu.addItem("Export Save");
    backupMenu.addItem("Import Save");
    backupMenu.addItem("Delete Save");

    bool loop = true;

    std::u32string info = tou32(dat.name);
    info += U" - SD/CIA";
    while(loop && !kill)
    {
        hidScanInput();

        u32 up = hidKeysUp();

        backupMenu.handleInput(up);
		
		if(up & KEY_A)
		{
			FS_Archive archive;
			if(openSaveArch(&archive, dat, true))
			{
				createTitleDir(dat, MODE_SAVE);
				
				switch(backupMenu.getSelected())
				{
					case _expSav:
						backupData(dat, archive, MODE_SAVE, false);
						break;
					case _impSav:
						restoreData(dat, archive, MODE_SAVE);
						break;
					case _delSav:
						if(confirm("Are you sure you want to delete this title's save data?", "Delete Save..."))
						{
							FSUSER_DeleteDirectoryRecursively(archive, fsMakePath(PATH_ASCII, "/"));
							FSUSER_ControlArchive(archive, ARCHIVE_ACTION_COMMIT_SAVE_DATA, NULL, 0, NULL, 0);
						}
						break;
				}
				
				deleteSV(dat);
				
			}
			FSUSER_CloseArchive(archive);
		}
		else if(up & KEY_B)
			break;

        killApp(up);

        sf2d_start_frame(GFX_TOP, GFX_LEFT);
            drawTopBar(info);
            backupMenu.draw();
        sf2d_end_frame();

        sf2d_start_frame(GFX_BOTTOM, GFX_LEFT);
        sf2d_end_frame();

        sf2d_swapbuffers();
    }
}