#include <3ds.h>
#include <sf2d.h>
#include <sftd.h>
#include <stdio.h>
#include <string>

#include "archive.h"
#include "cart.h"
#include "menu.h"
#include "backup.h"
#include "restore.h"
#include "ui.h"
#include "util.h"
#include "titledata.h"
#include "global.h"
#include "savemenu.h"

enum
{
    _saveOpts
};

//We can try two different ways with carts
bool openCart(FS_Archive *out, const titleData dat)
{
    //if first way works
    if(openCartArch(out))
        return true;
    else if(openSaveArch(out, dat, true))
        return true;

    return false;
}

extern std::string extDataConfirm;

void cartManager()
{
    //Check if there is a cart
    bool cartInserted;
    FSUSER_CardSlotIsInserted(&cartInserted);
    if(!cartInserted)
    {
        showMessage("No cartridge inserted!", "Error!");
        return;
    }

    //Make sure it's a 3ds game
    FS_CardType type;
    FSUSER_GetCardType(&type);
    if(type!=CARD_CTR)
    {
        showMessage("No DS support yet.", "Error!");
        return;
    }

    //get cart's id
    u64 cartID;
    AM_GetTitleList(NULL, MEDIATYPE_GAME_CARD, 1, &cartID);

    //use titledata to take care of everything
    titleData cartData;
    if(!cartData.init(cartID, MEDIATYPE_GAME_CARD))
    {
        showMessage("Failed to get info for cart!", "Error!");
        return;
    }
	
	FS_Archive archive;
	if(openCart(&archive, cartData))
		startSaveMenu(archive, cartData);
	FSUSER_CloseArchive(archive);
	
}