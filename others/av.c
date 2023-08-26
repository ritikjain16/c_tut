#include<stdio.h>
float av(int a,int b,int c);
int main(){
    int a,b,c;
    printf("enter a, b, c\n");
    scanf("%d%d%d",&a,&b,&c);
    
    printf("the average of 3 no. is %.2f",av(a,b,c) );
return 0;
}
float av(int a,int b, int c){
    float ave=(a+b+c)/3;
    return ave;
}