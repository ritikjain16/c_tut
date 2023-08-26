#include <stdio.h>

int main()
{
    int a[11] = {1, 2, 3, 45, 78, 56, 588, -2, -45,544, -457},n=0,m=0;
    for (int i = 0; i < 11; i++)
    {
        if (a[i] >0)
        {
            printf("%d. %d\n", i + 1, a[i]);
            n++;
        }
        else
        {
            printf("%d. %d\n",i+1,a[i]);
            m++;
        }
        
    }
    printf(" positive elements in array is %d\n",n);
    printf(" negative elements in array is %d\n",m);

    return 0;
}