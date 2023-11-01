#include <stdio.h>
#include <stdlib.h>

#include <time.h>

int main()
{
    char name[10][25];
    char temp[25];
    int i,j,n;
    clock_t t;

    n=5;

    //input nama
    for (i=0;i<n;i++) {

    }

    printf("\n");
    t=clock();

    //our sort
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
            if (strcmp(name[i],name[j])>0) {
                strcpy(temp,nama[i]);
                strcpy(nama[i],nama[j]);
                strcpy(nama[j],temp);
            }
    printf("\n");

    t=clock()-t;
    printf("Our Sort: Time taken = %f seconds",(double)t/CLOCKS_PER_SEC);

    //print sorted name

    return 0;
}
