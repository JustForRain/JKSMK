#include <3ds.h>

#include "titledata.h"
#include "archive.h"
#include "ui.h"
#include "global.h"

//All the information used here was found on 3dbrew.org
//thank them too.
bool openSaveArch(FS_Archive *out, const titleData dat, bool showError)
{
    //binary path
    u32 path[3];
    //first is mediaType
    path[0] = dat.media;
    //low id
    path[1] = dat.low;
    //high id. this is usually 0x00040000
    path[2] = dat.high;

    FS_Path binPath = {PATH_BINARY, 12, path};

    //setup archive info
    Result res = FSUSER_OpenArchive(out, ARCHIVE_USER_SAVEDATA, binPath);
    if(res)
    {
        if(showError)
            showMessage("Failed to open Save Archive!", "Error!");
        return false;
    }

    return true;
}

bool openSharedExt(FS_Archive *out, u32 id)
{
    u32 path[3];
    path[0] = MEDIATYPE_NAND;
    path[1] = id;
    path[2] = 0x00048000;

    FS_Path binPath = {PATH_BINARY, 12, path};

    Result res = FSUSER_OpenArchive(out, ARCHIVE_SHARED_EXTDATA, binPath);
    if(res)
    {
        showMessage("Failed to open Shared ExtData!", "Error!");
        return false;
    }

    return true;
}

bool openCartArch(FS_Archive *out)
{
    Result res = FSUSER_OpenArchive(out, ARCHIVE_GAMECARD_SAVEDATA, fsMakePath(PATH_EMPTY, ""));
    if(res)
    {
        return false;
    }

    return true;
}