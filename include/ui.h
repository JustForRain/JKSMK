#ifndef UI_H
#define UI_H

#include <string>
#include "box.h"

bool confirm(const char *maint, const char *titlet);
void showMessage(const char *maint, const char *titlet);

class progressBar
{
    public:
        progressBar(float _max, const char *t);
        ~progressBar();
        void draw(float cur);

    private:
        box *back;
        float max;
};

void progressBarInit();
void progressBarExit();

#endif // UI_H
