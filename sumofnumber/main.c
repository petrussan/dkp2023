#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mulai,jumlah;
    jumlah = 0;
    for (mulai=1;mulai<=10;mulai++) {
        if ((mulai%2)==0)
            jumlah=jumlah+mulai;
    }
    printf("Jumlah : %d",jumlah);

    return 0;
}
