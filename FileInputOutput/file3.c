#include <stdio.h>

int main()
{
    FILE *ptr;

    //  in write mode not need to make a file before executing.it will generate automatically.
    int num = 45;
    ptr = fopen("f2.txt", "w");

    // to print in a file we use --- fprintf.
    fprintf(ptr, "the no. is %d\n", num);
    fprintf(ptr,"thanks!");
    printf("file has successfully created. please check the txt file.");
    fclose(ptr);
    return 0;
}