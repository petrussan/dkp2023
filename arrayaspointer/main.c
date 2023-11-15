#include <stdio.h>
#include <stdlib.h>

void arraypassing(int x[]);

int main()
{
    int x[10] = {11,12,13,14,15,16,17,18,19,20};
    int i;

    for (i=0;i<10;i++) {
      printf("\ni=%d\tx[i]=%d",i,x[i]);
      printf("\t\t*(x+i)=%d",*(x+i));
      printf("\t&x[i]=%X\tx+i=%X",&x[i],(x+i));
    }
    printf("\n");
    arraypassing(x);
    for (i=0;i<10;i++) {
      printf("\ni=%d\tx[i]=%d",i,x[i]);
      printf("\t*(x+i)=%d",*(x+i));
      printf("\t&x[i]=%X\tx+i=%X",&x[i],(x+i));
    }
    return 0;
}

void arraypassing(int x[]){
   int i;
   for (i=0;i<10;i++)
      x[i] = x[i]*10;
}
