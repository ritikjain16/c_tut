#include<stdio.h>

int mul(int x){
    return x*10;

}
int main(){
    int y=3;
    printf("the value of three times of x is %d.\n",mul(y));
    y=mul(y);
    printf("the value of three times of x is %d.\n",mul(y));
    y=mul(y);
    printf("the value of three times of x is %d.\n",mul(y));
return 0;
}