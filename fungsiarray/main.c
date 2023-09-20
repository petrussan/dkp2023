#include <stdio.h>
#include <stdlib.h>

void bacaarray(int array[2][2]);
void cetakarray(int array[2][2]);

int main()
{
    int m1[2][2], m2[2][2];

    printf("Matrix 2x2\n");
    printf("Masukkan data matrix pertama:\n");
    bacaarray(m1);

    printf("\n");
    printf("Masukkan data matrix kedua: \n");
    bacaarray(m2);

    printf("\nMatrix A\n");
    cetakarray(m1);

    printf("\nMatrix B\n");
    cetakarray(m2);

    return 0;
}

void bacaarray(int array[2][2]) {
    int i,j;

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("M[%d][%d]: ",i+1,j+1);
            scanf(" %d",&array[i][j]);
        }
    }
}

void cetakarray(int array[2][2]) {
    int i,j;

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf(" %3d",array[i][j]);
        }
        printf("\n");
    }
}
