#include<stdio.h>
#include<math.h>

int main(){
    int a =4;
    // printf("area is %d\n",pow(a,2));
    // pow returns a double value always . so use %f instead of %d.
    // use .2%f for upto 2 decimal places.
    printf("area is %.2f \n",pow(a,2));
return 0;
}