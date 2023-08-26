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

  if (n != p)
  {
    printf("not multiply with these orders.\n");
  }
  else
  {
    printf("Enter elements of first Matrix\n");
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         scanf("%d", &a[i][j]);
    //     }
    // }
    scanArray(a, m, n);

    printf("Enter elements of second Matrix\n");
    // for (int i = 0; i < p; i++)
    // {
    //     for (int j = 0; j < q; j++)
    //     {
    //         scanf("%d", &b[i][j]);
    //     }
    // }
    scanArray(b, p, q);

    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < q; j++)
      {
        for (int k = 0; k < p; k++)
        {
          sum = sum + a[i][k] * b[k][j];
        }
        c[i][j] = sum;
        sum = 0;
      }
    }

    printf("Product of entered matrices is :\n");
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < q; j++)
    //     {
    //         printf("%d\t", c[i][j]);

    //     }
    //     printf("\n");
    // }
    PrintArray(a, m, n);
    PrintArray(b, p, q);
    PrintArray(c, m, q);
  }

  return 0;
}