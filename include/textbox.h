#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <string>

class textbox
{
    public:
        textbox(unsigned x, unsigned y, unsigned width, unsigned height, const char *maint, const char *titlet);
        void draw(bool Pressed, bool isButton);

        unsigned X, Y;
    protected:
        unsigned Width, Height;
        std::string MainT;
        std::string TitleT;
};

void textboxInit();
void textboxExit();

#endif // TEXTBOX_H