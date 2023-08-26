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

    struct employee e1, e2, e3;
    e1.code = 9;
    e1.salary = 1540.25;

// also define like .. struct employee e ={9,1523.326,"ritik"}

    printf("%d\t %f\t %s\n\n", e1.code, e1.salary, strcpy(e1.name, "Ritik jain"));
    
    e2.code = 10;
    e2.salary = 1545.2569;
    printf("%d\t %f\t %s\n\n", e2.code, e2.salary, strcpy(e2.name, "Pragati jain"));
    
    e3.code = 11;
    e3.salary = 1546589.23;
    printf("%d\t %f\t %s\n\n", e3.code, e3.salary, strcpy(e3.name, "Sanjeev jain"));
    return 0;
}