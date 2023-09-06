#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
//    int i;
//    for(i=0;i<5;i++){
      printf("Masukkan 1 huruf a-z atau A-Z: ");
      scanf(" %c",&x);
      x=toupper(x);
      if (x=='A'||x=='E'||x=='I'||x=='O'||x=='U') {
          printf("Vokal\n\n");
      }
      else {
          printf("Konsonan\n\n");
      }
//    }

    return 0;
}
