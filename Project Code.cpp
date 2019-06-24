#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);

class traffic
{
public:
    void show()
    {
        cout << "\t\t\t*****Welcome to our Project*****" << endl;
        cout << "\t\t   Project Name : Street Traffic Control System\n" << endl;
        cout << "\t\t\t   (Press Any Key to Continue)" << endl;
        getch();
        cout << "\nProject Instructions: " << endl;
    }

    void gotoxy(int x, int y)
    {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }

    void load()
    {
        int row,col;
        cout << "\n\n\t\t\tLOADING" << endl;
        for(row=1;row<=6;row++)
            {
                cout << "\t";
                for(col=0;col<=100000000;col++);//to display the loading dot slowly
                        cout  <<".";
            }
    }

    void sim()
    {
        int i;
        cout << "\n\t    Use Arrow Keys to Move the Car"<< endl;
        cout << endl;
        for(i=1;i<=10;i++)
        {
            cout << "\t\t\t|||-|||" << endl;
            if(i == 9)
            {
                cout << "\t\t    (S)*|||-|||*(S)" << endl;
            }
            if(i == 5)
            {
                cout << "\t\t    (C)#|||-|||#(C)" << endl;
            }
            if(i == 2)
            {
                cout << "\t\t   (SP)<|||-|||>(SP)" << endl;
            }
        }

        cout << "\t          (S)*           *(S)" << endl;
        cout << "________________________       ________________________" << endl;
        cout << "________________________       ________________________" << endl;
        cout << "________________________   0   ________________________" << endl;
        cout << "||||||||||||||||||||||||  000  ||||||||||||||||||||||||" << endl;
        cout << "________________________   0   ________________________" << endl;
        cout << "________________________       ________________________" << endl;
        cout << "________________________       ________________________" << endl;
        cout << "\t          (S)*           *(S)" << endl;

        for(i=0;i<=10;i++)
        {
            cout << "\t\t\t|||-|||" << endl;
            if(i == 0)
            {
                cout << "\t\t    (S)*|||-|||*(S)" << endl;
            }
            if(i == 5)
            {
                cout << "\t\t    (C)#|||-|||#(C)" << endl;
            }
            if(i == 8)
            {
                cout << "\t\t   (SP)<|||-|||>(SP)" << endl;
            }
        }
    }

    void console(int a, int b)
    {
        int x=0, y=0;
        while(true)
            {
                getch();

        if(GetAsyncKeyState(VK_UP))
            {
            gotoxy(x, y+1);
            cout << "^" << endl;
            cout << "|" << endl;
            cout << "|" << endl;
            }

        if(GetAsyncKeyState(VK_DOWN))
            {
            gotoxy(x, y-1);
            cout << "|" << endl;
            cout << "|" << endl;
            cout << "V" << endl;
            }

        if(GetAsyncKeyState(VK_RIGHT))
            {
            gotoxy(y, x-1);
            cout << "--->";
            }

        if(GetAsyncKeyState(VK_LEFT))
            {
            gotoxy(y, x+1);
            cout << "<---";
            }
            }
    }
};

int main()
{
    traffic obj;
    obj.show();
    obj.load();
    obj.sim();
    obj.console(1,1);
}
