#include <iostream>
#include "grafic.h"
using namespace std;

GraficObject::GraficObject()
{
    owner = "Student";
    length= 10;
    width = 10;
}
GraficObject::GraficObject(string owner, int length, int width):GraficObject()
{
    setowner(owner);
    setlength(length);
    setwidth(width);
}
GraficObject::GraficObject(const GraficObject &obj)
{
    this-> owner = obj.owner;
    this-> length= obj.length;
    this-> width = obj.width;
}
void GraficObject::setowner(string sowner)
{
    this->owner=sowner;
}
bool GraficObject::setlength(int slength)
{
    if(slength < 0)
        return false;
    this->length=slength;
    return true;
}
bool GraficObject::setwidth(int swidth)
{
    if(swidth < 0)
        return false;
    this->width=swidth;
    return true;
}
string GraficObject::getowner()
{
    return owner;
}
int GraficObject::getlength()
{
    return length;
}
int GraficObject::getwidth()
{
    return width;
}
void GraficObject::operator=(GraficObject &g)
{
    setowner(g.owner);
    setlength(g.length);
    setwidth(g.width);
}

