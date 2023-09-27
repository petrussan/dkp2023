#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i[100]; //menyimpan data bilangan
    int n; //banyaknya bilangan
    int c; //counter bilangan
    int total=0; //menyimpan jumlah

    printf("berapa jumlah bilangan yang dimasukkan? ");
    scanf(" %d",&n);
    for (c=0;c<n;c++) {
        printf("Masukkan bilangan ke %d: ",c+1);
        scanf(" %d",&i[c]);
    }
    for (c=0;c<n;c++) {
        if (i[c]%2==1)
            total=total+i[c];
    }
    printf("\nJumlah semua bilangan ganjil di dalam array: %d",
           total);


    return 0;
}
