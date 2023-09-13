#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angka, sum, rata2;
    int count=0;

    do{
       printf("Masukkan angka (0 untuk selesai): ");
       scanf(" %f",&angka);
       sum=sum+angka;
       count++;
    } while(angka!=0);
    count=count-1;
    rata2=sum/count;
    printf("\nJumlah angka: %d",count);
    printf("\nTotal semua angka: %f",sum);
    printf("\nRata-rata: %f",rata2);

    return 0;
}
