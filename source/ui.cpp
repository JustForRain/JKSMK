#include <3ds.h>
#include <sf2d.h>
#include <sftd.h>
#include <string>

#include "ui.h"
#include "textbox.h"
#include "button.h"
#include "img.h"
#include "global.h"

bool confirm(const char *t)
{
    bool ret = false;

    button yes("Yes", 40, 176);
    button no("No", 180, 176);
    textbox back(24, 24, 280, 200, t);
    while(true)
    {
        hidScanInput();

        u32 up = hidKeysUp();

        touchPosition p;
        hidTouchRead(&p);

        if(yes.released(p) || (up & KEY_A))
        {
            ret = true;
            break;
        }
        else if(no.released(p) || (up & KEY_B))
        {
            ret = false;
            break;
        }

        killApp(up);

        sf2d_start_frame(GFX_BOTTOM, GFX_LEFT);
            back.draw(false,false);
            yes.draw();
            no.draw();
        sf2d_end_frame();

        sf2d_swapbuffers();
    }

    return ret;
}

void showMessage(const char *t)
{
    button ok("OK", 116, 136);
    textbox back(0, 60, 320, 140, t);

    while(true)
    {
        hidScanInput();

        touchPosition p;
        hidTouchRead(&p);

        u32 up = hidKeysUp();

        if(ok.released(p) || (up & KEY_A) || (up & KEY_B))
            break;

        killApp(up);

        sf2d_start_frame(GFX_BOTTOM, GFX_LEFT);
            back.draw(false,false);
            ok.draw();
        sf2d_end_frame();

        sf2d_swapbuffers();
    }
}

sf2d_texture *progEmpty, *progFull;

void progressBarInit()
{
    progEmpty = sf2d_create_texture_mem_RGBA8(tex_progress_empty.pixel_data, tex_progress_empty.width, tex_progress_empty.height, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    progFull = sf2d_create_texture_mem_RGBA8(tex_progress_full.pixel_data, tex_progress_full.width, tex_progress_full.height, TEXFMT_RGBA8, SF2D_PLACE_RAM);
}

void progressBarExit()
{
    sf2d_free_texture(progEmpty);
    sf2d_free_texture(progFull);
}

progressBar::progressBar(float _max, const char *t)
{
    back = new textbox(0, 60, 320, 140, t);
    max = _max;
}

progressBar::~progressBar()
{
    delete back;
}

void progressBar::draw(float cur)
{
    float prog = (float)(cur / max) * 100;
    float xScale = (float)(prog * 128) / 100;

    back->draw(false,false);
    sf2d_draw_texture_scale(progEmpty, back->X + 16, back->Y + 40, 144, 4.5);
    sf2d_draw_texture_scale(progFull, back->X + 16, back->Y + 40, xScale + 16, 4.5);
}
