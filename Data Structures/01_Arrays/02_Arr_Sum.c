#include <stdio.h>

void scanArray(int A[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}

void PrintArray(int A[10][10], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{

    int m, n, p, q, sum = 0, a[10][10], b[10][10], c[10][10];

    printf("Enter rows and columns of first\n");
    scanf("%d%d", &m, &n);

    printf("Enter rows and columns of second\n");
    scanf("%d%d", &p, &q);

    if (m != p && n != q)
    {
        printf("Addition not possible\n");
    }
    else
    {
        printf("Enter elements of first array\n");
        scanArray(a, m, n);

        printf("Enter elements of second array\n");
        scanArray(b, p, q);

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        PrintArray(a, m, n);
        PrintArray(b, p, q);
        PrintArray(c, m, n);
    }

    return 0;
}