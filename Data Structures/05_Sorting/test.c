#include <stdio.h>

void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");
}
// ----------------------------------------------------------------------------------------------
void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("working on pass no. %d ---> ", i + 1);

        for (int j = 0; j <= n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
            }
        }
        PrintArray(a, n);
    }
}

void AdaptiveBubbleSort(int a[], int n)
{
    int isSorted = 0;
    for (int i = 0; i < n; i++)
    {
        isSorted = 1;
        printf("working on pass no. %d ---> ", i + 1);

        for (int j = 0; j <= n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
                isSorted = 0;
            }
        }
        PrintArray(a, n);
        if (isSorted)
        {
            return;
        }
    }
}
// ----------------------------------------------------------------------------------------------
void InsertionSort(int a[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        printf("working on pass no. %d ---> ", i);
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        PrintArray(a, n);
    }
}
// ----------------------------------------------------------------------------------------------
void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("working on pass no. %d ---> ", i + 1);
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
        PrintArray(a, n);
    }
}

// ----------------------------------------------------------------------------------------------

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

    int swap = a[j];
    a[j] = a[low];
    a[low] = swap;

    return j;
}

void QuickSort(int a[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        QuickSort(a, low, partitionIndex - 1);
        QuickSort(a, partitionIndex + 1, high);
    }
}

// ----------------------------------------------------------------------------------------------

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
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void RecursiveMergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        RecursiveMergeSort(a, low, mid);
        RecursiveMergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
    else
    {
        return;
    }
}

// ----------------------------------------------------------------------------------------------

int main()
{

    int a[] = {9, 1, 5, 3, 7, 2, 6, 4, 8};
    int n = sizeof(a) / sizeof(int);
    PrintArray(a, n);

    // BubbleSort(a, n);
    // PrintArray(a, n);

    // AdaptiveBubbleSort(a, n);
    // PrintArray(a, n);

    // InsertionSort(a,n);
    // PrintArray(a,n);

    // SelectionSort(a,n);
    // PrintArray(a,n);

    QuickSort(a, 0, n - 1);
    PrintArray(a, n);

    // RecursiveMergeSort(a, 0, n - 1);
    // PrintArray(a, n);

    return 0;

}