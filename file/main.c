#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    int x[10];
    int i;

    f = fopen ("data.txt","w");
    for (i=0;i<10;i++) {
        printf("i = %d : ",i);
        scanf(" %d",&x[i]);
        fprintf(f,"%d\n",x[i]);
    }
    fclose(f);
    return 0;
}
