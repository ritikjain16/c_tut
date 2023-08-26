#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int *A, int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[j];
    A[j] = A[low];
    A[low] = temp;

    return j;
}

void quickSort(int *A, int low, int high)
{
    int partitionIndex;
    // printArray(A,9);
    // printArray(A,10);
    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);
    }
}

int main()
{
    int A[]={25,65,89,67,12,3,0,87,69};
    // int A[]={5,9,6,4,8,1,3,0,7,2};
    int n=9;
    // int n=10;
    printArray(A,n);
    quickSort(A,0,n-1);
    printArray(A,n);



    // 25p,65i,89,67,12,3,0,87,69j
    // 25p,65i,89,67,12,3,0j,87,69

    // 25p,0,89,67,12,3,65,87,69

    // 25p,0i,89,67,12,3,65,87,69j
    // 25p,0,89i,67,12,3j,65,87,69

    // 25,0,3,67,12,89,65,87,69

    // 25,0,3,67i,12j,89,65,87,69
    // 25,0,3,12,67,89,65,87,69

    // 25,0,3,12j,67i,89,65,87,69
    // 12,0,3,25,67,89,65,87,69

    // 12,0,3                     ,25,                           67p,89i,65j,87,69
    // 12p,0,3ji                     ,25,                        67p,65,89,87,69
    // 3,0,12                     ,25,                           67p,65j,89i,87,69
    // 3,0    ,12                     ,25,                       65,   67,     89,87,69
    // 3p,0ij    ,12                     ,25,                    65,   67,     89p,87,69ij
    // 0,3    ,12                     ,25,                       65,   67,     69,87,89

    // --> 0,3,12,25,65,67,69,87,89
    return 0;
}