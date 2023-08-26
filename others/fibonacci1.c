#include <stdio.h>
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
    
}

int main()
{
    int a = 0, b = 1, c, i, n;
    printf("enter n\n");
    scanf("%d", &n);
    // printf("%d\t",a);
    // printf("%d\t",b);

    // for (i = 1; i <n-1; i++)
    // {
        
    //     c = a + b;
    //     a = b;
    //     b = c;

    //     printf("%d\t", c);
    // }



// by recursion
    fib(n);
    for(i=0;i<n;i++){
    printf("%d\t",fib(i));
    }


    return 0;
}
