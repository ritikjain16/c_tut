#include <stdio.h>

// typedef is use to short the name of any variable(mostly in structures).
// ex- date-->d

typedef struct date
{
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec;
} d;
void display(d a)
{
    printf("date is : %d/%d/%d-%d:%d:%d\n", a.date, a.month, a.year,a.hour,a.min,a.sec);
}
int datecmp(d d1, d d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return  -1;
    }
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    else
    {
        printf("Equal dates.\n");
    }

    return 0;
}
int main()
{
    d d1 = {16, 8, 2000,12,0,25};
    display(d1);
    d d2 = {16, 8, 2001,11,23,55};
    display(d2);
    int a = datecmp(d1, d2);
    printf("\nDate comparison function returns %d\n", a);
    return 0;
}