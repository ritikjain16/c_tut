#include <stdio.h>
#include <string.h>

//  struct - for different dissimilar data types
struct employee
{
    int code;
    float salary;
    char name[20];
};
int main()
{

    struct employee facebook[100];

//  can also define array in structures

    facebook[0].code = 9;
    facebook[0].salary = 1540.25;
    printf("%d\t %f\t %s\n\n", facebook[0].code, facebook[0].salary, strcpy(facebook[0].name, "Ritik jain"));
    
    return 0;
}