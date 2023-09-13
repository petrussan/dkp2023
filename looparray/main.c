#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angka[100];
    int i,n;

    printf("Anda hendak memasukkan berapa angka? ");
    scanf(" %d",&n);
    for(i=0;i<n;i++) {
       printf("Masukkan angka ke %d: ",i+1);
       scanf(" %f",&angka[i]);
    }
    for(i=0;i<n;i++) {
       printf("angka ke %d: %f\n",i,angka[i]);
    }
    return 0;
}
