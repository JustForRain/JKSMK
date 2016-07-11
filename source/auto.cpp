#include <3ds.h>
#include <sf2d.h>
#include <sftd.h>

#include "auto.h"
#include "menu.h"
#include "backup.h"
#include "restore.h"
#include "titles.h"
#include "ui.h"
#include "util.h"
#include "auto.h"
#include "archive.h"
#include "global.h"

void autoBackup(menu m)
{
	
    progressBar autoDump((float)m.getSelectCount(), "Copying saves... ");
    //Keep track of what's done
    float dumpCount = 0;
    for(unsigned i = 0; i < m.getSize(); i++)
    {
        //This is for titles with no save archive ex. Fantasy Life
        FS_Archive saveArch;
        if(m.optSelected(i) && openSaveArch(&saveArch, sdTitle[i], false))//if it's selected and we can open save archive
        {
            createTitleDir(sdTitle[i], MODE_SAVE);
            backupData(sdTitle[i], saveArch, MODE_SAVE, true);
            dumpCount++;
        }
        FSUSER_CloseArchive(saveArch);
		
        sf2d_start_frame(GFX_BOTTOM, GFX_LEFT);
        autoDump.draw(i);
        sf2d_end_frame();
        sf2d_swapbuffers();
    }

    showMessage("Successfully Exported all Save Files.", "Success!");
	
}

void autoRestore(menu m)
{
    //This still needs user input.
    for(unsigned i = 0; i < m.getSize(); i++)
    {
        FS_Archive saveArch;
        if(m.optSelected(i) && openSaveArch(&saveArch, sdTitle[i], false))
            restoreData(sdTitle[i], saveArch, MODE_SAVE);
        FSUSER_CloseArchive(saveArch);
    }
}