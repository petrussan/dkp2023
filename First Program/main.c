#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Masukkan bilangan a: ");
    scanf(" %d",&a);
    printf("Masukkan bilangan b: ");
    scanf(" %d",&b);

    if (a>b)
        printf("a adalah bilangan terbesar");
    else
        printf("b adalah bilangan terbesar");

    return 0;
}
