#include <stdio.h>

int main()
{
    int i, n, prime = 1;
    printf("enter the no.\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is not aprime no.\n", n);
    }
    else
    {
        printf("%d is a prime no.\n", n);
    }
    return 0;
}