#include <stdio.h>
#include <math.h>

int a[100], b[100], c[100], i, j, k = 0, m, n, f = 0;
void union1()
{

    for (i = 0; i < n; i++)
    {
        c[k] = a[i];
        k++;
    }
    for (i = 0; i < m; i++)
    {
        f = 0;
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            c[k] = b[i];
            k++;
        }
    }
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}

void Intersection()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
            }
        }
    }
}

void difference()
{
    for (i = 0; i < n; i++)
    {
        f = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            printf("%d ", a[i]);
        }
    }
}

void symmetricdifference()
{
    k = 0;
    for (i = 0; i < n; i++)
    {
        f = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            c[k] = a[i];
            k++;
        }
    }

    for (i = 0; i < m; i++)
    {
        f = 0;
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            c[k] = b[i];
            k++;
        }
    }

    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
}

void cartesianProduct()
{
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("(%d,%d),", a[i], b[j]);
        }
    }
}

void PowerSet(char set[], int size)
{
    int b = 0;
    unsigned int power_set_size = pow(2, size);
    printf("{ {}, ");
    for (i = 0; i < power_set_size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i & (1 << j))
            {
                printf("{%c},", set[j]);
            }
        }
        printf("\t");
    }
    printf(" }");
}

int main()
{
    printf("Enter the size of first array\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of second array\n");
    scanf("%d", &m);
    printf("Enter the elements\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    // union1();
    // Intersection();
    // difference();
    // cartesianProduct();
    symmetricdifference();

    // char set[]={'1','2','3'};
    // PowerSet(set,3);

    return 0;
}