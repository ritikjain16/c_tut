#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n)
{
    for (int i = 0; i < n - 1; i++) // for(n-1) pass
    {
        // printArray(A,n);
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            int swap = A[i];
            A[i] = A[min];
            A[min] = swap;
        }
    }
}

// 23,10,97,32,65

// 1ST PASS
// i=0
// min=0

// j=1
// A[1]<A[0]
// min=1

// j=2
// A[2]<A[1]

// j=3
// A[3]<A[1]

// j=4
// A[4]<A[1]

// so min=1
// 0!=1
// swap A[0],A[1]

// --> 10,23,97,32,65

// 2ND pASS
// i=1,min=1,j=2,  A[2]<A[1],   A[3]<A[1],    A[4]<A[1] ,min=1   no swap bcz A[1]is min;
// --> 10,23,97,32,65

// 3RD PASS
// i=2,min=2,j=3,    A[3]<A[2] min=3 ,    A[4]<A[3] , min=3     swap (A[3],A[2])
// --> 10,23,32,97,65

// 4TH PASS
// i=3,min=3,j=4 ,         A[4]<A[3] min =4,      swap(A[4],A[3])
// --> 10,23,32,65,97

int main()
{
    int A[] = {23, 10, 97, 32, 65};
    int n = 5;
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);
    return 0;
}