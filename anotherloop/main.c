#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for (i=4;i<10;i++) {
      for (j=0;j<10;j++) {
        printf(" %3d",(i+1)*(j+1));
      }
      printf("\n");
    }

    return 0;
}
