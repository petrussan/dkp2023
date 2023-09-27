#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const char vocal[] = {'a','e','i','o','u',
                          'A','E','I','O','U'};
    char kar;
    int i;
    int s=0;

    printf("Masukkan 1 karakter: ");
    scanf(" %c",&kar);
//    if ( kar=='a' || kar=='e' || kar=='i' ||
//         kar=='o' || kar=='u' || kar=='A' ||
//         kar=='E' || kar=='I' || kar=='O' || kar=='U')
//      printf("ini vokal");
    for (i=0;i<strlen(vocal);i++) {
        if (kar==vocal[i])
            s=1;
    }
    if (s==1)
        printf("ini vocal");

    return 0;
}
