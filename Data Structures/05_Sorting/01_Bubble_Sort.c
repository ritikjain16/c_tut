#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int *A, int n)
{
    for (int i = 0; i < n - 1; i++) // for number of passes
    {
        printf("Bubble Sort working on pass number %d\n", i + 1);
        //   printArray(A,n);
        for (int j = 0; j < n - 1 - i; j++) // for number of comparisons in each pass
        {
            if (A[j] > A[j + 1])
            {
                int swap = A[j];
                A[j] = A[j + 1];
                A[j + 1] = swap;
            }
        }
    }
}

// to make bubblesort adaptive (already sorted array.)
void adaptiveBubbleSort(int *A, int n)
{
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // for number of passes
    {
        printf("Adaptive Bubble Sort working on pass number %d\n", i + 1);
      
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // for number of comparisons in each pass
        {
            if (A[j] > A[j + 1])
            {
                int swap = A[j];
                A[j] = A[j + 1];
                A[j + 1] = swap;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    int A[] = {5, 9, 8, 7, 10, 6};
    int n = 6;
    printArray(A, n);
    bubbleSort(A, n);
    printArray(A, n);

    int B[] = {5, 6, 7, 8, 9, 10};
    adaptiveBubbleSort(B, n);
    printArray(B, n);
    return 0;
}