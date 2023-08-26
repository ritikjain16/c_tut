#include<stdio.h>

int main(){
    int array[100], c, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++){

  
    scanf("%d", &array[c]);
  }

    printf("your array is:\n");
  for (c = 0; c < n; c++)
  {
    printf("%d\t", array[c]);
  }


return 0;
}