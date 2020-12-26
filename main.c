
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    printf("vvedite stroku\n");
    char s[100], s1[100], w[100];
    gets(s);
    char *st = strtok (s," ");
    int l=0, r=0;
    r=strlen(st)-1;
    strcpy(s1, st);
    st = strtok(NULL, " ");
    while (st != NULL)
    {

        if (strcmp(st, ".") != 0)
        {
            // printf(" ");
            l=2+r;
            r=r+strlen(st)+1;
            //  printf("*%s\n", st);
            if (strchr(st, '.')!=NULL)
            {

                r=r-1;
            }
            // printf("%3d %3d\n", l, r);
            //  printf("%3d\n", strlen(st));
            strcat(s1, " ");
        }

        strcat(s1, st);
        st = strtok(NULL, " ");
    }
    puts(s1);
    char st1[r-l+1];

    strncpy(st1, s1+l, r-l+1);
    st1[r-l+1]='\0';
    strncpy(s, s1, r+1);
    s[r+1]='\0';
    w[0]='\0';
    st = strtok(s, " ");
    printf("Zadacha 2:\n");
    int k=1;
    while (st != NULL)
    {
        // printf("%d", strlen(st));
        //printf("*%s %s\n", st, st1 );
        if (strcmp(st, st1) != 0)
        {
            printf("%s ", st);
            if (k)
            {
                strcpy(w, st);
                k=0;
            }
            else
            {
                strcat(w, " ");
                strcat(w, st);
            }
        }
        st = strtok(NULL, " ");

    }

    printf("\n");

    printf("Zadacha 3:\n");

    st=strtok(w, " ");
    int len;
    char t[100];
    strcpy(t, "");
    while (st != NULL){
            len= strlen(st);
            char *k = strrchr (st, st[0]);
            int k1 = k-st;
            char le[2], le1[2];
            le[0]=st[0];
            le[1]='\0';
            for (int i=0; i < len; i++){
                strncpy(le1, st+i, 1);
                //printf("*%s %s\n", le, le1);
                if (i == k1 || strcmp(le, le1)){
                        strcat(t, le1);
                }
            }
            strcat(t, " ");
            st= strtok (NULL, " " );

    }
    puts(t);

return 0;
}
