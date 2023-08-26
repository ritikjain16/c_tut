#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr;
  int n;
  printf("enter the size of n\n");
  scanf("%d", &n);
  ptr = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
  {
    printf("enter the value of %d element :  ", i + 1);
    scanf("%d", &ptr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    printf("the value of %d element is : %d \n", i + 1, ptr[i]);
  }
  return 0;
}