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
string Window::gettitle()
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
    cout<<"Информация о классе Window:"<<endl;
    cout<<"Владелец    :  "<<owner<<endl;
    cout<<"Длина окна  :  "<<length<<endl;
    cout<<"Ширина окна :  "<<width<<endl;
    cout<<"Заголовок   :  "<<title<<endl<<endl;
  }
