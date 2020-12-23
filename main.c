
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    printf("vvedite stroku\n");
    char s[100], s1[100];
    gets(s);
    char *st = strtok (s," ");
    strcat(s1, st);
    st = strtok(NULL, " ");
    while (st != NULL)
    {


        if (strcmp(st, ".") != 0)
            // printf(" ");
            strcat(s1, " ");
            strcat(s1, st);
        st = strtok(NULL, " ");
    }

    //strcat(s1, "\0");
    puts(s1);

    return 0;
}
