#ifndef GRAFIC_H_INCLUDED
#define GRAFIC_H_INCLUDED

using namespace std;

class GraficObject
{
protected:
    string owner;
    int length;
    int width;
public:
    GraficObject();
    GraficObject(string owner, int length, int width);
    GraficObject(const GraficObject &obj);
    void setowner(string sowner);
    bool setlength(int slength);
    bool setwidth (int swidth);
    string getowner();
    int getlength();
    int getwidth();
    virtual void print() const = 0;
    void operator= (GraficObject &g);

};
#endif // GRAFIC_H_INCLUDED
