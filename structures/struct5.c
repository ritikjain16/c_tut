#include<stdio.h>

typedef struct complex{
int real;
int complex;
}co;
 void display(co c){
     printf("Real part is : %d\n",c.real);
     printf("complex part is : %d\n",c.complex);
 }


int main(){
    co a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the real value for %d num: \n",i+1);
        scanf("%d",&a[i].real);
      
        printf("enter the complex value for %d num: \n",i+1);
        scanf("%d",&a[i].complex);
    }
    for (int i = 0; i < 5; i++)
    {
        display(a[i]);
    }
    
    
return 0;
}