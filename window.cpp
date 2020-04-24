#include <iostream>
#include "window.h"
#include "grafic.h"
using namespace std;

Window::Window():GraficObject(), title("Window 1"){}
Window::Window(string owner, int length, int width, string title):GraficObject(owner, length, width), title("Window 2")
{
    (settitle(title));
}
Window::Window(const Window &obj)
{
    this->title=obj.title;
}
void Window::settitle(string stitle)
{
    this->title=stitle;
}
string Window::gettitle() const
{
    return title;
}
void Window::operator=(Window &w)
{
     (settitle(w.title));
}
void Window::print() const
  {
    setlocale(LC_ALL, "Russian");
    cout<<"Èíôîðìàöèÿ î êëàññå Window:"<<endl;
    cout<<"Âëàäåëåö    :  "<<owner<<endl;
    cout<<"Äëèíà îêíà  :  "<<length<<endl;
    cout<<"Øèðèíà îêíà :  "<<width<<endl;
    cout<<"Çàãîëîâîê   :  "<<title<<endl<<endl;
  }
