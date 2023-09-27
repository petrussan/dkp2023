#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    char t[100];
//    char u[100];
    int cmpresult;

    scanf(" %[^\n]",s);
    printf("data s: %s", s);
    printf("\npanjang: %d",strlen(s));
    strcpy(t,s);
    printf("\ndata t: %s", t);
    cmpresult=strcmp(s,t);
    printf("\n");
    if (cmpresult==0)
        printf("s dan t sama");
    else if (cmpresult<0)
        printf("s < t");
    else
        printf("s > t");
//    printf("\nhasil perbandingan s dan t: %d",strcmp(s,t));
//    strcpy(u,"String baru");
//    printf("\ndata u: %s", u);
//    cmpresult=strcmp(s,u);
    cmpresult=strcmp(s,"ABC");
    printf("\n");
    if (cmpresult==0)
        printf("s dan u sama");
    else if (cmpresult<0)
        printf("s < u");
    else
        printf("s > u");
//    printf("\nhasil perbandingan s dan u: %d",strcmp(s,u));
    printf("\n%s ",strupr(s));


    return 0;
}
