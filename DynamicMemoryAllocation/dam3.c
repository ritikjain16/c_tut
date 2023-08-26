#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
      printf("enter the value of %d element :  ",i+1);
      scanf("%d",&ptr[i]);
    }


// default value of calloc is 0;

    for(int i=0;i<5;i++){
      printf("the value of %d element is : %d \n",i+1,ptr[i]);
    }

    // after using DAM free the memory.
    free(ptr);
return 0;
}