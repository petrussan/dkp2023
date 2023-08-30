#include <stdio.h>
#include <stdlib.h>

int main()
{
    int umur;
    char nama[30];
    int a,b,c;

    printf("Masukkan nama Anda: ");
//    scanf(" %s",nama);
    scanf(" %[^\n]",nama);
    printf("Masukkan umur Anda: ");
    scanf(" %d",&umur);
    printf("Masukkan 3 buah angka: ");
    scanf(" %d %d %d",&a,&b,&c);
    printf("Hello %s\n",nama);
    printf("Umur Anda %d tahun",umur);
    printf("Anda memasukkan angka: %d %d %d\n",a,b,c);
    printf("Jumlahnya: %d",a+b+c);
    return 0;
}
