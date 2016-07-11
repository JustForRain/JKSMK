#include <3ds.h>
#include <sf2d.h>
#include <sftd.h>
#include <stdio.h>
#include <string.h>

#include "global.h"
#include "textbox.h"
#include "img.h"

sf2d_texture *tbox, *tex_button, *tex_buttondown, *tex_boxbar;

void textboxInit()
{
    tbox = sf2d_create_texture_mem_RGBA8(tbox_img.pixel_data, tbox_img.width, tbox_img.height, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    tex_button = sf2d_create_texture_mem_RGBA8(tex_button_img.pixel_data, 48, 48, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    tex_buttondown = sf2d_create_texture_mem_RGBA8(tex_buttondown_img.pixel_data, 48, 48, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    tex_boxbar = sf2d_create_texture_mem_RGBA8(tex_boxbar_img.pixel_data, 48, 48, TEXFMT_RGBA8, SF2D_PLACE_RAM);
}

void textboxExit()
{
    sf2d_free_texture(tbox);
    sf2d_free_texture(tex_button);
    sf2d_free_texture(tex_buttondown);
    sf2d_free_texture(tex_boxbar);
}

textbox::textbox(unsigned x, unsigned y, unsigned width, unsigned height, const char *text)
{
    Text.assign(text);

    X = x;
    Y = y;
    Width = width;
    Height = height;
}

void textbox::draw(bool Pressed, bool isButton)
{
	
    float xScale, yScale;
	unsigned color, textwidth, textheight;
	
    xScale = (float)((Width) / 16);
    yScale = (float)((Height) / 16);
	
	sf2d_texture *texture;
	
	//Draw the TextBox's Background;
	if(!isButton) {
		texture = tbox;
	} else if(isButton && !Pressed) {
		texture = tex_button;
	} else if(isButton && Pressed) {
		texture = tex_buttondown;
	}
	
	//Draw the TextBox's Background and TextBox's Bar;
	sf2d_draw_texture_part_scale(texture, X, Y, 16, 16, 16, 16, xScale, yScale);
	if(!isButton) { sf2d_draw_texture_part_scale(tex_boxbar, X, Y, 16, 16, 16, 24, xScale, 1); }
	
	//If it's not a Button, Use White Text and a smaller Y-axis height. If it is a Button, Use Black Text and a larger Y-axis height;
	if(!isButton) { color = RGBA8(255, 255, 255, 255); textheight = 4; } else { color = RGBA8(0, 0, 0, 255); textheight = 8; }
	
	//Draw the Text;
	textwidth = sftd_get_text_width(font, 12, Text.c_str());
	sftd_draw_text(font, X + ((Width - textwidth) / 2), Y + textheight, color, 12, Text.c_str());
	
}