#include<stdio.h>

int sum (int a,int b){
   int c = a+b;
   a=5212;    
   b=64625;

// if we change the value of a and b by CALL BY VALUE then a and b not affect the main function.
// main function takes only those values which are defined in main function.
// so we use CALL BY REFERENCE (ADDRESS).

   return c;
}
int main(){
    int c=3,d=4;
    printf("the sum is %d\n",sum(c,d));
    
return 0;
}