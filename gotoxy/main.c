#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y);

int main()
{
    int i;
    int x,y;

    srand(time(NULL));
//    for (i=0;i<10;i++) {
//        x = rand()%80;
//        y = rand()%25;
//        gotoxy(x,y);
//        printf("Hello World!!!");
//    }
    for (x=0;x<70;x++) {
        for(i=0;i<1000000000;i++);
        gotoxy(x,10);
        printf("Hello World!!!!");
    }
    return 0;
}

void gotoxy(int x, int y) {
    HANDLE h;
    COORD c;
    c.X = x;
    c.Y = y;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(h,c);
}
