#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n)
{
    for (int i = 1; i <= n - 1; i++) // for (n-1) passes
    {
        // printArray(A,n);
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key) // for each pass
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
int main()
{
    int A[] = {45, 10, 87, 65, 23, 38};
    int n = 6;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);

    // 45,| 10, 87, 65, 23, 38       i=1,key=10,j=0
    // 10, 45,| 87, 65, 23, 38       1st pass done (i=1)!

    // 10, 45, 87,| 65, 23, 38        i=2,key=87,j=1
    // 10, 45, 87,| 65, 23, 38        1st pass done (i=2)!


    // 10, 45, 87,| 65, 23, 38        i=3,key=65,j=2   
    // 10, 45, 65, 87,| 23, 38          


    // 10, 45, 65, 87, 23,| 38         i=4;key=23,j=3
    // 10, 45, 65, 23, 87,| 38         i=4;key=23,j=2
    // 10, 45, 23, 65, 87,| 38         i=4;key=23,j=1
    // 10, 23, 45, 65, 87,| 38         i=4;key=23,j=1
   


    // 10, 23, 45, 65, 87, 38           i=5;key=38,j=4
    // 10, 23, 45, 65, 38, 87           i=5;key=38,j=3
    // 10, 23, 45, 38, 65, 87           i=5;key=38,j=2
    // 10, 23, 38, 45, 65, 87           i=5;key=38,j=1
    
     return 0;
}