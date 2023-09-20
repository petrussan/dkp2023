#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m1[2][2], m2[2][2];
    int i,j;

    printf("Matrix 2x2\n");
    printf("Masukkan data matrix pertama:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("A[%d][%d]: ",i+1,j+1);
            scanf(" %d",&m1[i][j]);
        }
    }

    printf("\n");
    printf("Masukkan data matrix kedua: \n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++) {
            printf("B[%d][%d]: ",i+1,j+1);
            scanf(" %d",&m2[i][j]);
        }

    printf("\nMatrix A\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf(" %3d",m1[i][j]);
        }
        printf("\n");
    }


    return 0;
}
