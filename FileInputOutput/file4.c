#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("f3.txt","r");

    // to get a character from a file. we use ---> fgetc
  
    
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));
    // printf("%c",fgetc(ptr));


    // to print the complete file

    char c;
    while(c!=EOF){
        printf("%c",c);
        c=fgetc(ptr);
    }
fclose(ptr);
    
    
    
return 0;

}