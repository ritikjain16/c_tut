#include <stdio.h>

int main()
{
    int year;
    printf("Enter year\n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("leap year\n");
            }
            else
            {
                printf("not a leap year\n");
            }
        }
        else
        {
            printf("leap year\n");
        }
    }
    else
    {
        printf("not a leap year\n");
    }
    // --------------------------------------------------------------------------------------
    if (year % 400 == 0)
    {
        printf("leap year\n");
    }
    else if (year % 100 == 0)
    {
        printf("not a leap year\n");
    }
    else if (year % 4 == 0)
    {
        printf("leap year\n");
    }
    else
    {
        printf("not a leap year\n");
    }
    // ---------------------------------------------------------------------------------------------
    if ((year % 4 == 0 && year % 400 == 0 && year % 100 == 0))
    {
        printf("leap year\n");
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("leap year\n");
    }

    else
    {
        printf("not a leap year\n");
    }

    return 0;
}