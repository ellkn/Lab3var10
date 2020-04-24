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
string Image::getphoto() const
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
    cout<<"Èíôîðìàöèÿ î êëàññå Image:"<<endl;
    cout<<"Âëàäåëåö    :  "<<owner<<endl;
    cout<<"Äëèíà îêíà  :  "<<length<<endl;
    cout<<"Øèðèíà îêíà :  "<<width<<endl;
    cout<<"Èçîáðàæåíèå :  "<<photo<<endl<<endl;
  }

