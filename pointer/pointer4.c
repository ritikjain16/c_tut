#include<stdio.h>
void printadd(int a){
    printf("the address of a is %u\n",&a);
}
int main(){
    int i=4;
    printf("the address of i is %u\n",&i);
    printadd(i);  // stores different address (address of variable which is  of function defined above)
    printf("the address of variable i is %u\n",&i); // stores different address of  variable  which is of main function)


return 0;
}