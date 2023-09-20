#include <stdio.h>
#include <stdlib.h>

int perkalian(int x, int y);   //function prototype
void hasilkali(int x, int y);

int main()
{   int x,y;
    int c;

    printf("Masukkan dua angka untuk dikalikan: ");
    scanf(" %d %d",&x,&y);
    hasilkali(x,y);
    printf("\nx: %d, y: %d",x,y);

//    c = perkalian(a,b);
//    printf("Hasil kali: %d",c);
//    printf("Hasil kali: %d",perkalian(a,b));

    return 0;
}

int perkalian(int x, int y) {
    int hasil;
    hasil = x*y;
    return hasil;
}

void hasilkali(int x, int y) {
    int hasil;
    printf("\nx: %d, y: %d",x,y);
    hasil = x*y;
    printf("\nHasil kali: %d",hasil);
    x=100;y=200;
    printf("\nx: %d, y: %d",x,y);
}
