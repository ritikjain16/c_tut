#include <stdio.h>

int search(int a[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int A[] = {2, 45, 7869, 545, 12, 23, 25, 59, 546, 78, 659};
    int n = sizeof(A) / sizeof(int); // to find the size of array.
    // printf("%d",n);

    int element = 545;
    if (search(A, n, element) != -1)
    {
        printf("%d element found at at index %d\n", element, search(A, n, element));
    }
    else
    {
        printf("Not found in array\n");
    }

    return 0;
}