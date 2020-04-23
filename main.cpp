#include <iostream>
#include <Windows.h>
#include "grafic.h"
#include "window.h"
#include "button.h"
#include "image.h"
#include "input.h"

using namespace std;

void SetColor(int text, int background)
{
   HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int main()
{
    setlocale(LC_ALL, "Russian");

    SetColor( 10, 0);
    Window a;
    a.setowner("Teacher");
    a.setlength(56);
    a.setwidth(4);
    a.settitle("Book");
    a.print();

    SetColor( 12, 0);
    Button b;
    b.setowner("System");
    b.setlength(10);
    b.setwidth(40);
    b.setbut("Ок");
    b.print();

    SetColor( 9, 0);
    Image c;
    c.setowner("Student");
    c.setlength(40);
    c.setwidth(40);
    c.setphoto("mark.jpeg");
    c.print();

    SetColor( 11, 0);
    Input d;
    d.setowner("Student");
    d.setlength(50);
    d.setwidth(50);
    d.settext("Надеюсь, выполненная работа верна");
    d.print();

    SetColor( 15, 0);
    return 0;
}
