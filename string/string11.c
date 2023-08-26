#include <stdio.h>

void decrypt(char a[])
{
    char *ptr = a;

    while (*ptr != '\0')
    {
        *ptr = *ptr - 1 ;
        ptr++;
    }
}
int main()
{
    char s1[30] = "SJUJL.KBJO.BOE.QSBHBUJ.KBJO";
    decrypt(s1);
    printf("%s ", s1);

    return 0;
}