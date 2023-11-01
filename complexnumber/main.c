#include <stdio.h>
#include <stdlib.h>

//struct complexx {
//   int real;
//   int imajiner;
//};
//struct complexx bil[10];

typedef struct {
   int real;
   int imajiner;
} complex;

int main()
{
    complex bilangan[10];
    complex sum;
    int i;
    sum.real=0;sum.imajiner=0;
    printf("Masukkan bilangan dalam format x+yi\n");
    for (i=0;i<3;i++) {
        printf("Masukkan bilangan kompleks ke %d: ",i+1);
        scanf(" %d+%di",&bilangan[i].real,
                        &bilangan[i].imajiner);
        sum.real = sum.real+bilangan[i].real;
        sum.imajiner = sum.imajiner+bilangan[i].imajiner;
    }

    printf("Bilangan yang dimasukkan: \n");
    for (i=0;i<3;i++) {
        printf(" %d: %d+%di\n",i+1,bilangan[i].real,
                               bilangan[i].imajiner);
    }
    return 0;
}

