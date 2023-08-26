#include <stdio.h>

void slice(char *a,int m, int n)
{
    int i=0;

    while ((m+i)<n)
    {
        a[i]=a[i+m];
        
        i++;
    }
    a[i]='\0';
}
int main()
{
    char s1[30] = "RITIK";
    slice(s1,1,4);
    printf("%s ", s1);

    return 0;
}