#include <iostream>
#include "image.h"
#include "grafic.h"
using namespace std;

Image::Image():GraficObject(), photo("photo.jpeg"){}
Image::Image(string owner, int length, int width, string but):GraficObject(owner, length, width),photo("photo.jpeg")
{
    (setphoto(photo));
}
void Image::setphoto(string sphoto)
{
    this->photo=sphoto;
}
string Image::getphoto()
{
    return photo;
}
void Image::operator= (Image &i)
{
    (setphoto(i.photo));
}
void Image::print() const
  {
    setlocale(LC_ALL, "Russian");
    cout<<"���������� � ������ Image:"<<endl;
    cout<<"��������    :  "<<owner<<endl;
    cout<<"����� ����  :  "<<length<<endl;
    cout<<"������ ���� :  "<<width<<endl;
    cout<<"����������� :  "<<photo<<endl<<endl;
  }

