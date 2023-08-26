#include<stdio.h>
void pp(int n);
int main(){
    int a;
    printf("enter n\n");
    scanf("%d",&a);
   pp(a);
    
    
return 0;
}
void pp(int n){
    if(n==1){
        printf("*\n");
        return;
    }
    pp(n-1);
    for (int i = 0; i < (2*n-1); i++)
    {
        printf("*");

    }
    printf("\n");
    
}