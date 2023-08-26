#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("f10.txt","w");
    int a;
    printf("enter the value\n");
    scanf("%d",&a);
    
    
    fprintf(ptr,"the value is %d.\n",a*2);
    printf("check value in file!");
    fclose(ptr);
return 0;
}