#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int in(int a,int k,int b[k])
{
    int i;
    for(i=0; i<=k-1; i++)
    {
        if(b[i]==a)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL,"Rus");
    int i,k,n,count=0;


    FILE *f,*f1;
    char s[2][100], Input[100],output[100];

    printf("Расположение файла чтения:\n");
    gets(Input);
    f=fopen(Input,"r");
    printf("Расположение файла записи:\n");
    gets(output);
    f1=fopen(output,"w");
    fgets(&s[0][0], 100, f);
    n=strlen(&s[0][0]);


    k=0;
    for(i=0; i<=n-1; i++)
    {
        if(s[0][i]==' ')
        {
            if(!(i==n-1) && !(i+1==n-1) && !(s[0][i+1]==' ') && !(s[0][i+1]=='.') && !(k==0))
            {
             s[1][k]=' ';
                k++;
            }
        }
        else
        {
            s[1][k]=s[0][i];
            k++;
        }
    }
    s[1][k]='\0';
    fprintf(f1,"%s\n",&s[1][0]);


    fclose(f);
    fclose(f1);
    puts(output);
    return 0;
}
