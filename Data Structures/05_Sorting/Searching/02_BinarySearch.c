#include <stdio.h>

int BinarySearch(int a[], int n, int element)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == element)
        {
            return mid;
        }
        if (a[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // array should be in sorted order.
    int A[] = {5, 20, 40, 89, 100, 115, 165, 200, 300, 456, 658, 999};
    int n = sizeof(A) / sizeof(int);
    int element = 165;

    if (BinarySearch(A, n, element) != -1)
    {
        printf("%d element found at at index %d\n", element, BinarySearch(A, n, element));
    }
    else
    {
        printf("Not found in array\n");
    }
    return 0;
}