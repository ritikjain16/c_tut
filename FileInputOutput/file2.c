#include<stdio.h>

int main(){
     FILE *ptr;
    int num1,num2;
      ptr= fopen("f1.txt","r");
    // ptr= fopen("f2.txt","r");

    if(ptr==NULL){
        printf("file not exist.");
    }
    else{
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    printf("the value is %d\n",num1);
    printf("the value is %d\n",num2);
    fclose(ptr);
    }
return 0;
}