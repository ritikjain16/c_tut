#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    int t;
    printf("Enter the value of table which you want:\n");
    scanf("%d", &t);
    printf("Enter the size of table up to which you want to print the table:\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("the value of %d * %d = %d \n", t, i + 1, t * (i + 1));
    }

    int m;
    printf("\n Now reallocte the size of table up to which you want to print the table:\n");
    scanf("%d", &m);
    ptr = realloc(ptr, m * sizeof(int));

    for (int i = 0; i < m; i++)
    {
        printf("the value of %d * %d = %d\n", t, i + 1, t * (i + 1));
    }
    free(ptr);

    // malloc --> ptr=(int*)malloc(value* sizeof(int))
    // calloc --> ptr=(int*)calloc(value, sizeof(int))
    // realloc --> ptr=realloc(ptr,value* sizeof(int))
    // free--> free(ptr)

    return 0;
}