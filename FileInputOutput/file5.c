#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("f5.txt","w");
    
//  to print acharacter into file --> fputc

fputc('R',ptr);
fputc('i',ptr);
fputc('t',ptr);
fputc('i',ptr);
fputc('k',ptr);
fputc(' ',ptr);
fputc('J',ptr);
fputc('a',ptr);
fputc('i',ptr);
fputc('n',ptr);
    
    fclose(ptr);
return 0;
}