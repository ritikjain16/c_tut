#include <stdio.h>

void Printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
// ---------------------------------------------------------------
void bubbleSort(int a[], int n)
{
    int isSorted = 0;
    for (int i = 0; i < n; i++)
    {
        printf("working on pass no. %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
        Printarray(a, n);
    }
}
// ---------------------------------------------------------------

void insertionSort(int a[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        printf("working on pass no. %d\n", i);

        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        Printarray(a, n);
    }
}
// ---------------------------------------------------------------------

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("working on pass no. %d\n", i + 1);

        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            int swap = a[i];
            a[i] = a[min];
            a[min] = swap;
        }
        Printarray(a, n);
    }
}
// ------------------------------------------------------------
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (pivot >= a[i])
        {
            i++;
        }
        while (pivot <= a[j])
        {
            j--;
        }
        if (i < j)
        {
            int swap = a[i];
            a[i] = a[j];
            a[j] = swap;
        }
    } while (i < j);

    int temp = a[j];
    a[j] = a[low];
    a[low] = temp;
    return j;
}
void quickSort(int a[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex - 1);
        quickSort(a, partitionIndex + 1, high);
    }
}
// ------------------------------------------------------------------------------
void merge(int a[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int b[100];
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void recursivemergesort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        recursivemergesort(a, low, mid);
        recursivemergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
    else
    {
        return;
    }
}
int main()
{

    int A[] = {6, 4, 5, 3, 1, 2};
    int n = 6;
    Printarray(A, n);
    printf("\n");

    bubbleSort(A, n);
    Printarray(A, n);

    // insertionSort(A, n);

    // selectionSort(A, n);

    // quickSort(A, 0, n-1);
    // Printarray(A, n);
    // ------------------------------

    // int A[] = {5, 9, 1, 3, 7, 2};
    // int n = 6;

    // recursivemergesort(A, 0, n - 1);
    // Printarray(A, n);

    return 0;
}