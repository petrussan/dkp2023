#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,l;
    float area;
    char lagi;

    do {
       printf("Menghitung luas persegi panjang ");
       printf("\nMasukkan panjang:");
       scanf(" %f",&p);
       printf("\nMasukkan lebar:");
       scanf(" %f",&l);
       area=p*l;
       printf("\nLuas persegi panjang: %f",area);
       printf(" satuan persegi");

       printf("\n\nApakah mau menghitung lagi? (Y/T)");
       scanf(" %c",&lagi);
    } while ((lagi=='Y')||(lagi=='y'));
    printf("\nSampai ketemu lagi");
    return 0;

}
