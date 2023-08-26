#include<stdio.h>
#include<math.h>

void TOH(int n,char src, char des,char spare){
    if(n==1){
        printf("Move disk 1 from peg %c to peg %c.\n",src,des);
    }
    else{
        TOH(n-1,src,spare,des);
        printf("Move disk %d from peg %c to peg %c.\n",n,src,des);
        TOH(n-1,spare,des,src);
    }
}

int main(){
    int n;
    printf("Enter no. of disks:\n");
    scanf("%d",&n);
    int i = pow(2,n)-1;
    printf("Succesfully done in %d moves.\n",i);
    TOH(n,'A','C','B');

return 0;
}