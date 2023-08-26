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
   int pos, n;

   printf("Enter the size of array\n");
   scanf("%d", &n);

   printf("Enter the elements\n");
   scanArray(a, n);
   PrintArray(a, n);

   printf("Enter the position at which you want to delete the element\n");
   scanf("%d", &pos);

   if (pos > n)
   {
      printf("cannot be deleted");
   }
   else
   {

      for (int i = pos - 1; i < n - 1; i++)
      {
         a[i] = a[i + 1];
      }

      printf("Resultant array is\n");
      PrintArray(a, n - 1);
   }
   return 0;
}