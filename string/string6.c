#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "RITIK ";
    char s2[30] = "BHAI...";
    strcat(s1, s2); // strcat(target,source)
    printf("%s", s1);
    return 0;
}