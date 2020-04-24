#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED
#include "grafic.h"
using namespace std;

class Input: public GraficObject
{
protected:
    string text;
public:
    Input();
    Input(string owner, int length, int width, string text);
    void settext(string stext);
    string gettext() const;
    void print() const override;
    void operator= (Input &t);

};

#endif // INPUT_H_INCLUDED
