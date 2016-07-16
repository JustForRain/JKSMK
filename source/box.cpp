#include <3ds.h>
#include <sf2d.h>
#include <sftd.h>
#include <stdio.h>
#include <string.h>

#include "global.h"
#include "box.h"
#include "img.h"

sf2d_texture *bg, *button, *buttondown, *boxbar;

void boxInit()
{
    bg = sf2d_create_texture_mem_RGBA8(tex_box.pixel_data, tex_box.width, tex_box.height, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    button = sf2d_create_texture_mem_RGBA8(tex_button.pixel_data, 48, 48, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    buttondown = sf2d_create_texture_mem_RGBA8(tex_buttondown.pixel_data, 48, 48, TEXFMT_RGBA8, SF2D_PLACE_RAM);
    boxbar = sf2d_create_texture_mem_RGBA8(tex_bar.pixel_data, tex_bar.width, tex_bar.height, TEXFMT_RGBA8, SF2D_PLACE_RAM);
}

void boxExit()
{
    sf2d_free_texture(bg);
    sf2d_free_texture(button);
    sf2d_free_texture(buttondown);
    sf2d_free_texture(boxbar);
}

box::box(unsigned x, unsigned y, unsigned width, unsigned height, const char *maint, const char *titlet)
{
    TitleT.assign(titlet);
    MainT.assign(maint);
	
    X = x;
    Y = y;
    Width = width;
    Height = height;
}

void box::draw(bool Pressed, bool isButton)
{
	
    float xScale, yScale;
    xScale = (float)((Width) / 16);
    yScale = (float)((Height) / 16);
	sf2d_texture *texture;
	
	//Figure out which texture to use and Draw it;
	if(!isButton){texture = bg;} else if(isButton && !Pressed) {texture = button;} else if(isButton && Pressed) {texture = buttondown;}
	sf2d_draw_texture_part_scale(texture, X, Y, 16, 16, 16, 16, xScale, yScale);
	
	//If it's not a Button;
	if(!isButton) {
		
		//Draw the Title Bar;
		sf2d_draw_texture_scale(boxbar, X, Y, xScale, 1.5);
		sftd_draw_text(font, X + 8, Y + 4, RGBA8(255, 255, 255, 255), 12, TitleT.c_str());
		
		//Draw the Main Text;
		sftd_draw_text_wrap(font, X + ((Width - sftd_get_text_width(font, 12, MainT.c_str())) / 2), Y + ((Height - 12) / 3), RGBA8(255, 255, 255, 255), 12, Width - 16, MainT.c_str());
		
	} else {
		
		//Draw the Main Text;
		sftd_draw_text(font, X + ((Width - sftd_get_text_width(font, 12, MainT.c_str())) / 2), Y + 8, RGBA8(0, 0, 0, 255), 12, MainT.c_str());
		
	}
	
}