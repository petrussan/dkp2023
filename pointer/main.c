#include <stdio.h>
#include <stdlib.h>

void function1(int a);
void function2(int *pa);
int function3(int a);

int main()
{
    int a = 100;
    int *pa;
//    int* pointer;

    pa = &a;
//    pointer = &a;

    printf("a: %d\n",a);
    printf("pa: %p\n",pa);
//    printf("pointer: %p\n",pointer);
    printf("isi dari alamat di pa: %d\n\n",*pa);
    function1(a);
    printf("out from function1: ");
    printf("a: %d\n",a);
    function2(pa);
    printf("out from function2: ");
    printf("a: %d\n",a);
    //a=function3(a);
    //printf("out from function3 and return value assigned to a ");
    //printf("a: %d\n",a);

    return 0;
}

void function1(int angka) {
    angka = angka * 100;
    printf("inside function1 : ");
    printf("angka: %d\n",angka);
}

void function2(int *pa) {
    *pa = . * 100;
    printf("inside function2 : ");
    printf("*pa: %d\n",*pa);
}

int function3(int a) {
    a = a * 100;
    printf("inside function3 : ");
    printf("a: %d\n",a);
    return a;
}
