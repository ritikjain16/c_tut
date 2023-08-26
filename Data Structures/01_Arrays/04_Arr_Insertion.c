#include <stdio.h>

void scanArray(int A[10], int m)
{
   for (int i = 0; i < m; i++)
   {
      scanf("%d", &A[i]);
   }
}

void PrintArray(int A[10], int m)
{
   for (int i = 0; i < m; i++)
   {
      printf("%d\t", A[i]);
   }
   printf("\n");
}

int main()
{

   int a[10];
   int pos, value, n;

   printf("Enter the size of array\n");
   scanf("%d", &n);

   printf("Enter the elements\n");
   scanArray(a, n);
   PrintArray(a, n);

   printf("Enter the position at which you want to insert the element\n");
   scanf("%d", &pos);

   if (pos > n+1)
   {
      printf("cannot be inserted");
   }
   else
   {

      printf("Enter the value\n");
      scanf("%d", &value);

      for (int i = n - 1; i >= pos - 1; i--)
      {
         a[i + 1] = a[i];
      }

      printf("Resultant array is\n");

      a[pos - 1] = value;
      PrintArray(a, n + 1);
   }
   return 0;
}