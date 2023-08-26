#include <stdio.h>

int main()
{
    //     int marks[5];
    //     for(int i=0;i<5;i++){
    // printf("enter the marks of %d student\n",i+1);
    // scanf("%d",&marks[i]);
    //     }
    //     for(int i=0;i<5;i++){
    // printf(" the marks of %d student is %d\n",i+1,marks[i]);

    // }

    int mark[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("enter the marks of %d student in %d subject : \n", i + 1, j + 1);
            scanf("%d", &mark[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" the marks of %d student  in %d subject is : %d\n", i + 1, j + 1, mark[i][j]);
        }
    }

    return 0;
}