#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1=fopen("f7.txt","r");
    ptr2=fopen("f8.txt","w");

    char c;
    while(c!=EOF){
        fputc('R',ptr2);
        fputc('R',ptr2);
        c=fgetc(ptr1);

    }
    fclose(ptr1);
    fclose(ptr2);
return 0;
}