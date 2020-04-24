#include <iostream>
#include "button.h"
#include "grafic.h"

using namespace std;

Button::Button():GraficObject(), but("ok"){}
Button::Button(string owner, int length, int width, string but):GraficObject(owner, length, width), but("close")
{
    (setbut(but));
}
void Button::setbut(string sbut)
{
    this->but=sbut;
}
string Button::getbut() const
{
    return but;
}
void Button::operator= (Button &b)
{
    (setbut(b.but));
}
void Button::print() const
  {
    setlocale(LC_ALL, "Russian");
    cout<<"Èíôîðìàöèÿ î êëàññå Button:"<<endl;
    cout<<"Âëàäåëåö    :  "<<owner<<endl;
    cout<<"Äëèíà îêíà  :  "<<length<<endl;
    cout<<"Øèðèíà îêíà :  "<<width<<endl;
    cout<<"Êíîïêà      :  "<<but<<endl<<endl;
  }
