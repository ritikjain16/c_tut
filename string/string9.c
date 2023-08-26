#include <stdio.h>

int occ(char a[], char c)
{
    char *ptr = a;
    int n=0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            printf("yes it occurs.");
            n++;
        }
        

        ptr++;
    }
    return n;
}
int main()
{
    char s1[30] = "RITIK ";
     int a=occ(s1, 'I');
    printf(" And it occurs %d times.",a);

    return 0;
}