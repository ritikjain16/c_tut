#include<stdio.h>
int f(int n);
int main(){
    int a=8;
    f(a);
    printf(" the value of %d is %d\n",a,f(a));
return 0;
}
int f(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*f(x-1);
    }
}