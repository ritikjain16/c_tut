#include<stdio.h>

struct vector{
    int x;
    int y;
};
struct vector sum(struct vector v1, struct vector v2){
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    printf(" after sum x dim is %d and y dim is %d",result.x,result.y);
}
int main(){
    struct vector v1 ,v2;
    v1.x=23;
    v1.y=12;
    printf("x dim is %d and y dim is %d\n",v1.x,v1.y);
    v2.x=46;
    v2.y=18;
    printf("x dim is %d and y dim is %d\n",v2.x,v2.y);
    sum(v1,v2);

return 0;
}