#include<stdio.h>

int main(){
    int a[10]={2,3,5,4,47,89,45};
    int *j=a;
    
//     j=j+2;
//  if(j==&a[2]){
//      printf("same\n");
//  }
//  else
//  {
//      printf("not same\n");
//  }


// a[2] and *(j+3) not give same value.
// a[2] is third element.
// *(j+3) is fourth element.
printf("third element is : %d\n",a[2]);
printf("the value of third element is : %d  ",*(j+3));


 
return 0;
}