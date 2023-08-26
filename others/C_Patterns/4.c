#include<stdio.h>

int main(){
    // 1.
    // int n;
    // int i,j,k;
    // printf("Enter n\n");
    // scanf("%d",&n);
    // for(i=n;i>=1;i--){
    //     for(j=i;j<=n-1;j++){
    //         printf(" ");
    //     }
    //     for(k=i;k>=1;k--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }




    // 2.
    // int n;
    // int i,j,k;
    // printf("Enter n\n");
    // scanf("%d",&n);
    // for(i=n;i>=1;i--){
    //     for(j=i;j<=n-1;j++){
    //         printf(" ");
    //     }
    //     for(k=i;k>=1;k--){
    //         printf("%d",i);
    //     }
    //     printf("\n");
    // }




    // 3.
    // int n;
    // int i,j,k;
    // printf("Enter n\n");
    // scanf("%d",&n);
    // for(i=n;i>=1;i--){
    //     for(j=n-1;j>=i;j--){
    //         printf(" ");
    //     }
    //     for(k=1;k<=i;k++){
    //         printf("%d",k);
    //     }
    //     printf("\n");
    // }




    // 4.
    // char i,j,k;
    // for(i='F';i>='A';i--){
    //     for(j=i;j<='E';j++){
    //         printf(" ");
    //     }
    //     for(k=i;k>='A';k--){
    //         printf("%c",i);
    //     }
    //     printf("\n");
    // }



    // 5.
    // int i,j,k;
    // for(i='F';i>='A';i--){
    //     for(j='E';j>=i;j--){
    //         printf(" ");
    //     }
    //     for(k='A';k<=i;k++){
    //         printf("%c",k);
    //     }
    //     printf("\n");
    // }


    // 6.
    int n;
    int i,j,k;
    printf("Enter n\n");
    scanf("%d",&n);
    for(i=n-1;i>=0;i--){
        for(j=n-1;j>i;j--){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("%c",k+65);
        }
        printf("\n");
    }
return 0;
}