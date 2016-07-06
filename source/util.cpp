#include <3ds.h>
#include <stdio.h>
#include <string>
#include <string.h>

#include "global.h"
#include "util.h"
#include "titledata.h"
#include "dir.h"
#include "ui.h"
#include "smdh.h"
#include "archive.h"

std::u32string tou32(const std::u16string t)
{
    char32_t *tmp = new char32_t[256];
    memset(tmp, 0, sizeof(char32_t) * 256);

    utf16_to_utf32((uint32_t *)tmp, (uint16_t *)t.data(), 256);

    std::u32string ret;
    ret.assign(tmp);

    delete[] tmp;

    return ret;
}

std::u32string modeText(int mode)
{
    std::u32string ret;
    switch(mode)
    {
        case MODE_SAVE:
            ret = tou32(tou16(" : Save"));
            break;
        case MODE_EXTDATA:
            ret = tou32(tou16(" : ExtData"));
            break;
        case MODE_BOSS:
            ret = tou32(tou16(" : Boss ExtData"));
            break;
        case MODE_SYSSAVE:
            ret = tou32(tou16(" : System Save"));
            break;
        case MODE_SHARED:
            ret = tou32(tou16(" : Shared ExtData"));
            break;
    }
    return ret;
}

std::u16string tou16(const char *t)
{
    char16_t *tmp = new char16_t[256];
    memset(tmp, 0, sizeof(char16_t) * 256);

    utf8_to_utf16((uint16_t *)tmp, (uint8_t *)t, 256);

    std::u16string ret;
    ret.assign(tmp);

    delete[] tmp;

    return ret;
}

std::string toString(const std::u16string t)
{
    std::string ret;

    for(unsigned i = 0; i < t.length(); i++)
        ret += t[i];

    return ret;
}

void createTitleDir(const titleData t, int mode)
{
    std::u16string create = getPath(mode) + t.nameSafe;

    FSUSER_CreateDirectory(sdArch, fsMakePath(PATH_UTF16, create.data()), 0);
}

void deleteSV(const titleData t)
{
    u64 in = ((u64)SECUREVALUE_SLOT_SD << 32) | (t.unique << 8);
    u8 out;

    Result res = FSUSER_ControlSecureSave(SECURESAVE_ACTION_DELETE, &in, 8, &out, 1);
    if(res)
    {
        showMessage("Failed to delete secure value!");
    }
}

std::u16string getPath(int mode)
{
    std::u16string ret;
    switch(mode)
    {
        case MODE_SAVE:
            ret = tou16("/3ds/data/JKSV/Saves/");
            break;
        case MODE_EXTDATA:
            ret = tou16("/3ds/data/JKSV/ExtData/");
            break;
        case MODE_BOSS:
            ret = tou16("/3ds/data/JKSV/Boss/");
            break;
        case MODE_SYSSAVE:
            ret = tou16("/3ds/data/JKSV/SysSave/");
            break;
        case MODE_SHARED:
            ret = tou16("/3ds/data/JKSV/Shared/");
            break;
    }
    return ret;
}

bool runningUnder()
{
    u64 id;
    APT_GetProgramID(&id);

    //check if it's using its own ID
    if(id==0x0004000002c23300)
        return false;

    return true;
}

void deleteExtdata(const titleData dat)
{
    FS_ExtSaveDataInfo del;
    del.mediaType = MEDIATYPE_SD;
    del.saveId = dat.extdata;

    Result res = FSUSER_DeleteExtSaveData(del);
    if(res)
    {
        showMessage("Error deleting ExtData!");
    }
}

void createExtData(const titleData dat)
{
    FS_ExtSaveDataInfo create;
    create.mediaType = MEDIATYPE_SD;
    create.saveId = dat.extdata;

    smdh_s *tempSmdh = loadSMDH(dat.low, dat.high, dat.media);

    //100 should be enough, right?
    Result res = FSUSER_CreateExtSaveData(create, 100, 100, 0x10000000, sizeof(smdh_s), (u8 *)tempSmdh);
    if(res)
    {
        char error[256];
        sprintf(error, "Error creating extData! 0x%08X.", (unsigned)res);
        showMessage(error);
    }
    else
        showMessage("ExtData created successfully!");

    delete tempSmdh;
}

void evenString(std::string *test)
{
    if(test->length() % 2 == 0)
        test->append(" ");
}

//Just returns whether or not the touch screen is pressed anywhere.
bool touchPressed(touchPosition p)
{
    //I don't think either of these are ever 0
    //unless the screen isn't touched.
    if(p.px>0 || p.py>0)
        return true;

    return false;
}

void sleep(int s)
{
    s64 time = s * 1000000000;
    svcSleepThread(time);
}

bool modeExtdata(int mode)
{
    if(mode==MODE_EXTDATA || mode==MODE_BOSS || mode==MODE_SHARED)
        return true;

    return false;
}

bool fexists(const char *path)
{
    FILE *test = fopen(path, "r");
    if(test==NULL)
        return false;

    fclose(test);

    return true;
}
