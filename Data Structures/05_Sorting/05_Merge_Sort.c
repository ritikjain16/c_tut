#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void mergeSort(int *A, int *B, int *C, int m, int n)
{
    int i, j, k;
    i = j = k = 0;
    int l = m + n;

    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
            C[k] = B[j];
            j++;
            k++;
        }
    }
    while (i < m)
    {
        C[k] = A[i];
        i++;
        k++;
    }
    while (j < n)
    {
        C[k] = B[j];
        j++;
        k++;
    }
}

void mergeSortInOneArray(int *A, int low, int mid, int high)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    int B[100];

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}
void recursiveMergeSort(int *A, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        recursiveMergeSort(A, low, mid);
        recursiveMergeSort(A, mid + 1, high);
        mergeSortInOneArray(A, low, mid, high);
    }
    else
    {
        return;
    }
}
int main()
{
    // int A[] = {1, 3, 5, 7, 9};
    // int B[] = {2, 4, 6, 8, 10, 11};
    // int m = 5;
    // int n = 6;
    // int C[11];
    // printArray(A,m);
    // printArray(B,n);
    // mergeSort(A,B,C,m,n);
    // printArray(C,11);

    //  MAIN MERGE SORT
    int A[] = {6, 8, 5, 9, 45, 78, 95, 100, 32, 53};
    int n = 10;
    recursiveMergeSort(A, 0, 9);
    printArray(A, n);

    return 0;
}