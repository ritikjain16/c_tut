#include <stdio.h>

int main()
{
    int i = 4;
    int *p = &i;
    printf("the address of pointer p is %u\n", p);
    p++;
    printf("the address of pointer p is %u\n", p);
    p += 2;
    printf("the address of pointer p is %u\n", p);

    char j = 4;
    char *q = &j;
    printf("the address of pointer q is %u\nm", q);
    q++;
    printf("the addressqof pointer q is %u\n", q);
    q += 2;
    printf("the address of pointer q is %u\n", q);

    float l = 4.3;
    float *m = &l;
    printf("the address of pointer m is %u\n", m);
    m++;
    printf("the address of pointer m is %u\n", m);
    m += 2;
    printf("the address of pointer m is %u\n", m);
    return 0;
}