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
    cout<<"Информация о классе Image:"<<endl;
    cout<<"Владелец    :  "<<owner<<endl;
    cout<<"Длина окна  :  "<<length<<endl;
    cout<<"Ширина окна :  "<<width<<endl;
    cout<<"Изображение :  "<<photo<<endl<<endl;
  }

