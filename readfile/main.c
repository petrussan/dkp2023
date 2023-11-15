#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    int x[10];
    int i;

    f = fopen ("data.txt","r");
    if (f==NULL) {
        printf("ERROR - can not open file\n");
    }
    else {
        i=0;
        while (!feof(f)) {
           fscanf(f," %d\n",&x[i]);
           printf("%d\n",x[i]);
           i++;
        }
    }
    fclose(f);
    return 0;
}
