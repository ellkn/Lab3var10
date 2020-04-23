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
    cout<<"���������� � ������ Button:"<<endl;
    cout<<"��������    :  "<<owner<<endl;
    cout<<"����� ����  :  "<<length<<endl;
    cout<<"������ ���� :  "<<width<<endl;
    cout<<"������      :  "<<but<<endl<<endl;
  }
