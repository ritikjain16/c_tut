#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("f9.txt","w");
    int s;
    char n[20];
    printf("enter the name of employee\n");
    gets(n);
    printf("enter his salary\n");
    scanf("%d",&s);
    
    fprintf(ptr,"Name of employee is %s and his salary is %d.\n",n,s);
    printf("your file is successfully generated.");
    fclose(ptr);
 
return 0;
}