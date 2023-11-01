#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct student {
       char nrp[10];
       char nama[30];
       int umur;
    };

    struct student mhs1,mhs2;

    printf("Masukkan NRP mahasiswa 1: ");
    scanf(" %s",mhs1.nrp);
    printf("Masukkan nama mahasiswa 1: ");
    scanf(" %[^\n]",mhs1.nama);
    printf("Masukkan umur mahasiswa 1: ");
    scanf(" %d",&mhs1.umur);

    printf("NRP 1: %s\n",mhs1.nrp);
    printf("Nama 1: %s\n",mhs1.nama);
    printf("Umur 1: %d\n",mhs1.umur);

    return 0;
}
