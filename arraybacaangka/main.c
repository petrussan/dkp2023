#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angka[100], sum, rata2;
    int n;
    int i;

    printf("Anda hendak memasukkan berapa angka? ");
    scanf(" %d",&n);
    for(i=0;i<n;i++) {
       printf("Masukkan angka ke %d: ",i+1);
       scanf(" %f",&angka[i]);
       sum=sum+angka[i];
    }
    rata2=sum/n;
    printf("\nRata-rata: %f",rata2);

    return 0;
}
