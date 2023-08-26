#include <stdio.h>

int sum(int a, int b); // function prototype

int main()
{
    int x, y;
    int c = sum(3, 5); // function call
    printf("sum is %d\n", c);
    return 0;
}
int sum(int a, int b)
{ // function definition
    int res = a + b;
    return res;
}