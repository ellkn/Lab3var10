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
string Button::getbut()
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
    cout<<"Информация о классе Button:"<<endl;
    cout<<"Владелец    :  "<<owner<<endl;
    cout<<"Длина окна  :  "<<length<<endl;
    cout<<"Ширина окна :  "<<width<<endl;
    cout<<"Кнопка      :  "<<but<<endl<<endl;
  }
