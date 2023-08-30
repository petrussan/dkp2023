#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    char line[80];
    int count,tag;

    //printf("percobaan loop getchar\n");
    //for (count=0;(line[count]=getchar())!='\n';count++);
    //tag = count;
    //for (count=0;count<tag;count++)
    //    putchar(toupper(line[count]));

    printf("percobaan gets\n");
    gets(line);
    puts(line);

    //printf("percobaan getchar, 3x input\n");
    //c=getchar();
    //putchar(c);
    //c=getchar();
    //putchar(c);
    //c=getchar();
    //putchar(c);

    return 0;
}
