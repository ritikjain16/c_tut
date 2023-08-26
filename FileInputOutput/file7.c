#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("f6.txt","w");
    int n;
    printf("Enter the value of table which you have to print\n");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        fprintf(ptr,"%d * %d = %d\n",n,i+1,n*(i+1));
    }
    fclose(ptr);
    printf("your table has generated in given file.");
return 0;
}