#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

//    for(;;)
//        printf("Hello World");

//    for(i=0;i<10;i++)
//        printf("Perulangan ke: %d\n",i);

//    for(i=0;i<10;i++)
//        for (j=0;j<10;j++)
//          printf("i= %d, j= %d\n",i,j);

    for(i=0;i<10;i++) {
        for (j=0;j<10;j++)
          printf("%d,%d ",i,j);
        printf("\n");
    }

    return 0;
}
