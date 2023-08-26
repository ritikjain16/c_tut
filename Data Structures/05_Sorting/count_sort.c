#include <stdio.h>

int main()
{

 
    int a[] = {1, 6, 3, 3, 4, 5, 6, 3, 4, 5};
    int len = sizeof(a) / sizeof(a[0]);
 
    int c[10];
    int b[len];

    for (int i = 0; i < 10; i++)
    {
        c[i] = 0;
    }
    for (int j = 0; j < len; j++)
    {
        c[a[j]] = c[a[j]] + 1;
    }
    for (int i = 1; i < len; i++)
    {
        c[i] = c[i] + c[i - 1];
    }
    for (int j = len-1; j >= 0; j--)
    {
        b[c[a[j]]] = a[j];
        c[a[j]] = c[a[j]] - 1;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d\t", b[i]);
    }

    return 0;
}