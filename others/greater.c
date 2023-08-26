#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("enter a,b,c,d value\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>b && a>c && a>d){
    printf(" %d is greater",a);
}
else if (b>a && b>c && b>d)
{
    printf("%d is greater",b);
}
else if (c>a && c>b && c>d)
{
    printf("%d is greater",c);
}
else if(d>a && d>b && d>c)
{
    printf("%d is greater",d);
}
else
{
    printf("all no. are equal");
}



return 0;
}