#ifndef BUTTON_H_INCLUDED
#define BUTTON_H_INCLUDED
#include "grafic.h"
using namespace std;

class Button : public GraficObject
{
protected:
    string but;
public:
    Button();
    Button(string owner, int length, int width, string but);
    void setbut(string sbut);
    string getbut();
    void print() const override;
    void operator= (Button &b);
};

#endif // BUTTON_H_INCLUDED
