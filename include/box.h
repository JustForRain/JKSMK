#ifndef BOX_H
#define BOX_H

#include <string>

class box
{
    public:
        box(unsigned x, unsigned y, unsigned width, unsigned height, const char *maint, const char *titlet);
        void draw(bool Pressed, bool isButton);

        unsigned X, Y;
    protected:
        unsigned Width, Height;
        std::string MainT;
        std::string TitleT;
};

void boxInit();
void boxExit();

#endif // BOX_H