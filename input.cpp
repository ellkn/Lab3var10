#include <iostream>
#include "input.h"
#include "grafic.h"
using namespace std;

Input::Input():GraficObject(), text("text"){}
Input::Input(string owner, int length, int width, string text):GraficObject(owner, length, width),text("text")
{
    (settext(text));
}
void Input::settext(string stext)
{
    this->text=stext;
}
string Input::gettext()
{
    return text;
}
void Input::operator= (Input &t)
{
    (settext(t.text));
}
void Input::print() const
  {
    setlocale(LC_ALL, "Russian");
    cout<<"Информация о классе Input:"<<endl;
    cout<<"Владелец    :  "<<owner<<endl;
    cout<<"Длина окна  :  "<<length<<endl;
    cout<<"Ширина окна :  "<<width<<endl;
    cout<<"Текст       :  "<<text<<endl<<endl;
  }
