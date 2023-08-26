#include<stdio.h>

int main(){
    int n,f=1,i;
    printf("enter the no.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f*=i;
    }
    printf("factorial of %d is %d\n",n,f);
return 0;
}