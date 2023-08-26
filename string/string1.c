#include <stdio.h>

int main()
{
//          '\0' -->denotes end of string.  
 char a[30]={'1','2','3','4','\0'};
printf("%s\n",a);

    char c[30] = "RITIK";
    char *ptr = c;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}