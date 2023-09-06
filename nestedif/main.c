#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bulan;
    printf("Masukkan angka bulan: ");
    scanf(" %d",&bulan);
    if (bulan==1)
        printf("Januari\n");
    else if(bulan==2)
        printf("Februari\n");
    else if(bulan==3)
        printf("Maret\n");
    else if(bulan==4)
        printf("April\n");
    else if(bulan==5)
        printf("Mei\n");
    else if(bulan==6)
        printf("Juni\n");
    else if(bulan==7)
        printf("Juli\n");
    else if(bulan==8)
        printf("Agustus\n");
    else if(bulan==9)
        printf("September\n");
    else if(bulan==10)
        printf("Oktober\n");
    else if(bulan==11)
        printf("November\n");
    else if(bulan==12)
        printf("Desember\n");
    else
        printf("Tidak dikenal");
}

