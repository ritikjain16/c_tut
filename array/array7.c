#include<stdio.h>
void pr(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("the value of element %d is %d\n",i+1,a[i]);
    }
    a[2]=5555;
    
}
int main(){
    int b[]={1,5,7,8,78,65,45};
    pr(b,7);
    //  now the value changes. --> IMPORTANT
    printf("%d",b[2]);
return 0;
}