#include <stdio.h>
#include <stdlib.h>

#include <time.h>

void swap (int *a,int *b);

int main()
{
    int number[100000];
    int i,j,n,temp;
    clock_t t;

    n=10;
    srand(time(0));
    //generate n random number
    for (i=0;i<n;i++)
        number[i]=rand()%1000;

//    for (i=0;i<n;i++)
//        printf("%d\t",number[i]);
    printf("\n");
    t=clock();

    //our sort
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
            if (number[i]>number[j])
                swap(&temp,&number[i]);
//    for (i=0;i<n;i++)
//        printf("%d\t",number[i]);
    printf("\n");

    t=clock()-t;
    printf("Our Sort: Time taken = %f seconds",(double)t/CLOCKS_PER_SEC);

    //generate random number
    for (i=0;i<n;i++)
        number[i]=rand()%1000;
    printf("\n");
    for (i=0;i<n;i++)
        printf("%d\t",number[i]);
    printf("\n");

    t=clock();
    //bubble sort
    //loop i from 0 to n-1
    for (i=0;i<n-1;i++)
        // loop j from 0 to n-i-1
        for(j=0;j<n-i-1;j++)
              // compare number[j] and number[j+1]
              if (number[j]>number[j+1]) {
                temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
              }
                    //swap if necessary

    for (i=0;i<n;i++)
        printf("%d\t",number[i]);
    printf("\n");

    t=clock()-t;
    printf("Bubble Sort: Time taken = %f seconds",(double)t/CLOCKS_PER_SEC);


    return 0;
}

void swap (int *a,int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
