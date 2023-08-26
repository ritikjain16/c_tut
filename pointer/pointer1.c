#include<stdio.h>

int main(){
    int i=3;
    int *j;  // *j denotes value and j denotes address of i.
    j=&i;
    printf("the value of i is %d\n",i); //3
    printf("the value of i is %d\n",*j); //3


    printf("the address of i is %u\n",j); // value of j 
    printf("the address of i is %u\n",&i); // address of i

    printf("the address of j is %u\n",&j); //address of j

    printf("the value of j is %d\n",*(&j)); // value of address of j
    
return 0;
}