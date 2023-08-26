#include<stdio.h>

int main(){
    int a=3;
    // first know the compiler behaviour. then do the ques. 
    // this compiler behaviour is RIGHT TO LEFT. 
    printf(" %d %d %d\n",a,++a,a++);
    // printf(" %d %d %d\n",++a,a,a++);

return 0;
}