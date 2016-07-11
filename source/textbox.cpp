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

textbox::textbox(unsigned x, unsigned y, unsigned width, unsigned height, const char *maint, const char *titlet)
{
    TitleT.assign(titlet);
    MainT.assign(maint);
	
    X = x;
    Y = y;
    Width = width;
    Height = height;
}

void textbox::draw(bool Pressed, bool isButton)
{
	
    float xScale, yScale;
	unsigned textwidth;
	
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
	
	//Draw the Box's Background;
	sf2d_draw_texture_part_scale(texture, X, Y, 16, 16, 16, 16, xScale, yScale);
	
	//If it's not a Button;
	if(!isButton) {
		
		//Draw the Box's Bar;
		sf2d_draw_texture_part_scale(tex_boxbar, X, Y, 16, 16, 16, 24, xScale, 1);
		
		//Draw the Box's Title Text;
		sftd_draw_text(font, X + 8, Y + 4, RGBA8(255, 255, 255, 255), 12, TitleT.c_str());
		
		//Draw the Text;
		textwidth = sftd_get_text_width(font, 12, MainT.c_str());
		sftd_draw_text(font, X + ((Width - textwidth) / 2), Y + ((Height - 12) / 3), RGBA8(255, 255, 255, 255), 12, MainT.c_str());
		
	} else {
		
		//Draw the Text;
		textwidth = sftd_get_text_width(font, 12, MainT.c_str());
		sftd_draw_text(font, X + ((Width - textwidth) / 2), Y + 8, RGBA8(0, 0, 0, 255), 12, MainT.c_str());
		
	}
	
}