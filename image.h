#ifndef IMAGE_H_INCLUDED
#define IMAGE_H_INCLUDED
#include "grafic.h"
using namespace std;

class Image: public GraficObject
{
protected:
    string photo;
public:
    Image();
    Image(string owner, int length, int width, string photo);
    void setphoto(string sphoto);
    string getphoto() const;
    void print() const override;
    void operator= (Image &i);

};

#endif // IMAGE_H_INCLUDED
