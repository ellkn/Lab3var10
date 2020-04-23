#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED
#include "grafic.h"
using namespace std;

class Window : public GraficObject
{
protected:
    string title;
public:
    Window();
    Window(string owner, int length, int width, string title);
    Window(const Window &obj);
    void settitle(string stitle);
    string gettitle();
    void operator= (Window &w);
    void print() const override;

};

#endif // WINDOW_H_INCLUDED
