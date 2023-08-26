#include <stdio.h>

void wrong_swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;
}
void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 3, b = 4;
    wrong_swap(a, b); // not work CALL BY VALUE.
    printf("the value of a and b are %d and %d\n", a, b);

    swap(&a, &b); // call by reference means send "ADDRESS" so use "&".
    printf("the value of a and b are %d and %d\n", a, b);
    return 0;
}