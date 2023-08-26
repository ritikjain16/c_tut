#include <stdio.h>
void m(int a){
    int b[10];
    //  printf("enter the value of a\n");
    // scanf("%d", &a);
    for (int i = 0; i < 10; i++)
    {
        b[i] = a * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", a, i + 1, b[i]);
    }
    printf("***********************************************************************\n");

}
int main()
{

    int a;
m(4);
m(7);
m(9);
   

    return 0;
}