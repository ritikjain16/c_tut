#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;

    //  fopen ---- to open a file
    // fscanf ----- to get a no. from the file
    // fclose ---- to close a file

    ptr = fopen("f1.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("the value is %d\n", num);
    fclose(ptr);

    // FILE *ptr;
    // int num1,num2;
    // ptr= fopen("f1.txt","r");
    // fscanf(ptr,"%d",&num1);
    // fscanf(ptr,"%d",&num2);
    // printf("the value is %d\n",num1);
    // printf("the value is %d\n",num2);
    // fclose(ptr);
    return 0;
}