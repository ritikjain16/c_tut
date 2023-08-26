#include <stdio.h>

void encrypt(char a[])
{
    char *ptr = a;

    while (*ptr != '\0')
    {
        *ptr = *ptr + 1 ;
        ptr++;
    }
}
int main()
{
    char s1[30] = "RITIK";
    encrypt(s1);
    printf("%s ", s1);

    return 0;
}