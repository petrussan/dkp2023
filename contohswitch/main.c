#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bulan;
    printf("Masukkan angka bulan: ");
    scanf(" %d",&bulan);
    switch(bulan) {
        case 1: printf("Januari\n");
                break;
        case 2: printf("Februari\n");
                break;
        case 3: printf("Maret\n");
                break;
        case 4: printf("April\n");
                break;
        case 5: printf("Mei\n");
                break;
        case 6: printf("Juni\n");
                break;
        case 7: printf("Juli\n");
                break;
        case 8: printf("Agustus\n");
                break;
        case 9: printf("September\n");
                break;
        case 10: printf("Oktober\n");
                 break;
        case 11: printf("November\n");
                 break;
        case 12: printf("Desember\n");
                 break;
        default: printf("Tidak dikenal");
    }

    return 0;
}
