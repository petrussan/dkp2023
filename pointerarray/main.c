#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[] = {100,200,300,400,500,600,700,800,900,10};
    int i;

    for (i=0;i<10;i++) {
        printf("\ni=%d \t x[i]=%d",i+1,x[i]);
        printf("\t*(x+i)= %d",*(x+i));
        printf("\t&x[i]=%X\t(x+i)=%X",&x[i],(x+i));
    }
    return 0;
}
