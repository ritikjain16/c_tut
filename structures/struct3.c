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

    struct employee e;
    struct employee *p;

    // (*p).code=23;
    // OR

    p->code=23;
    p->salary=15469.25;
    strcpy(p->name,"ritik");

    printf("%d\t %f\t %s\n\n", p->code, p->salary, strcpy(p->name, "Ritik jain"));


    
    
    
    return 0;
}