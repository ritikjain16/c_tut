#include <stdio.h>

void PrintArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n\n");
}

void ScanArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\n");
}

void BubbleSort(int a[], int n)
{
    int isSorted = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Working on pass no. %d ---> ", i + 1);
        isSorted = 1;
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

void InsertionSort(int a[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        printf("Working on pass no. %d ---> ", i);
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

void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("Working on pass no. %d ---> ", i + 1);
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

void MergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
    else
    {
        return;
    }
}

int main()
{

    // int a[] = {15, 89, 25, 65, 32, 68, 48, 69};
    // int a[] = {9, 1, 5, 3, 7, 2, 6, 4, 8};
    int a[100], n;
    // int n = sizeof(a) / sizeof(int);
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter elements of array\n");
    ScanArray(a, n);
    PrintArray(a, n);

    printf("Enter which type of sort you want:\n\n1. Bubble Sort\n\n2. Insertion Sort\n\n3. Selection sort\n\n4. Quick Sort\n\n5. Merge Sort\n\n");

    int SortChoice;
    scanf("%d", &SortChoice);
    switch (SortChoice)
    {
    case 1:
        printf("\n\nBubble sort of the array is : \n\n");
        BubbleSort(a, n);
        break;
    case 2:
        printf("\n\nInsertion sort of the array is : \n\n");
        InsertionSort(a, n);
        break;
    case 3:
        printf("\n\nSelection sort of the array is : \n\n");
        SelectionSort(a, n);
        break;
    case 4:
        printf("\n\nQuick sort of the array is : \n\n");
        QuickSort(a, 0, n - 1);
        PrintArray(a, n);
        break;
    case 5:
        printf("\n\nMerge sort of the array is : \n\n");
        MergeSort(a, 0, n - 1);
        PrintArray(a, n);
        break;
    default:
        printf("\n\nPlease enter correct choice\n\n");
        break;
    }

    return 0;
}