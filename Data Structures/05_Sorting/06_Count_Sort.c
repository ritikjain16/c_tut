#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }

    return max;
}

void countSort(int *A, int n)
{
    int i, j;
    int max = maximum(A, n);

    int *count = (int *)malloc((max + 1) * sizeof(int));

    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }

    i = 0;
    j = 0;

    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{

    int A[] = {5, 0, 9, 8, 5, 6, 7, 2, 3, 1, 9};
    int n = 11;
    printArray(A, n);
    countSort(A, n);
    printArray(A, n);
    return 0;
}