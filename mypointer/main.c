#include <stdio.h>
#include <stdlib.h>

void function1(float n, int a);
void function2(float *n, int *a);

int main()
{
    float number = 100.50;
    int angka = 10;

    float *p1;   //pointer to number
    int *p2;     //pointer to angka

    p1 = &number;
    p2 = &angka;

    printf(" number: %f\n",number);
    printf(" angka: %d\n",angka);
    printf(" address of number: %p\n",p1);
    printf(" address of angka: %p\n",p2);
    printf(" *p1--*(%p) : %f\n",p1,*p1);
    printf(" *p2--*(%p) : %d\n",p2,*p2);
    function1(number,angka);
    printf(" number after calling function1: %f\n",number);
    function2(&number,&angka);
    printf(" number after calling function2: %f\n",number);
    return 0;
}

void function1(float n, int a) {
    n = n*a;
    printf(" n: %f\n",n);
}

void function2(float *n, int *a) {
    *n = *n * *a;
    printf(" *n: %f\n",*n);
}
