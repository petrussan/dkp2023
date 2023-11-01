#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
int recursivefactorial(int n);


int main()
{
    int n,hasil;

    printf("Mau menghitung faktorial berapa? ");
    scanf(" %d",&n);
    hasil = recursivefactorial(n);
    printf("\n %d! adalah %d",n,hasil);
    return 0;
}

int recursivefactorial(int n) {
   if (n>1)
     return (n*recursivefactorial(n-1));
   else
     return 1;
}

int factorial(int n) {
    int i, result;

    result = 1;
    for (i=n;i>1;i--)
       result=result*i;

    return result;
}




