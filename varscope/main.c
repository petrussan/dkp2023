#include <stdio.h>
#include <stdlib.h>

void functiona();

int hasil; //global variable

int main()
{
    int hasil;

    hasil = 10;
    printf("%d\n",hasil);

    functiona();
    printf("nilai hasil sekarang : %d\n",hasil);
    functionb();functionb();functionb();
    functionc();functionc();functionc();
    return 0;
}

void functiona() {
    hasil = hasil*10;
    printf("%d\n",hasil);
}

void functionb() {
   int a=10;
   a=a*10;
   printf("a di function b: %d\n ",a);
}

void functionc() {
   static int a=10;
   a=a*10;
   printf("a di function c: %d\n ",a);
}
