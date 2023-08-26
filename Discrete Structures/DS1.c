#include <stdio.h>
#include <math.h>

int a[100], b[100], c[100], d[100], i, j, m, n, k = 0, flag = 0;
void Union()
{
    for (i = 0; i < n; i++)
    {
        c[k] = a[i];
        k++;
    }
    for (i = 0; i < m; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            c[k] = b[i];
            k++;
        }
    }
    printf("Union:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d\t", c[i]);
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
                printf("%d\t", a[i]);
            }
        }
    }
}
void Difference()
{
    printf("Difference A-B is :\n");
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\t", a[i]);
        }
    }
    printf("\nDifference B-A is :\n");
    for (i = 0; i < m; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\t", b[i]);
        }
    }
}
void SymmetricDifference()
{
    k = 0;
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            d[k] = a[i];
            k++;
        }
    }

    for (i = 0; i < m; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            d[k] = b[i];
            k++;
        }
    }
    printf("Symmetric Difference (A-B)U(B-A):\n");
    for (i = 0; i < k; i++)
    {
        printf("%d\t", d[i]);
    }
}

void CartesianProduct()
{
    printf("Cartesian Product A X B is :\n");
    printf("{");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("(%d,%d)", a[i], b[j]);
            printf(",");
        }
    }
    printf("}\n");

    printf("Cartesian Product B X A is :\n");
    printf("{");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("(%d,%d)", b[i], a[j]);
            printf(",");
        }
    }
    printf("}\n");
}

void PowerSet(char *set, int size)
{
    int b = 0;
    unsigned int pow_set_size = pow(2, size);
    printf("Power set is :");
    printf("{ {}, ");
    for (i = 0; i < pow_set_size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i & (1 << j))
            {
                printf("{%c},", set[j]);
            }
        }
        printf("\n");
    }
    printf(" }");
}

int main()
{

    printf("Enter the size of array A\n");
    scanf("%d", &n);
    printf("enter the elements of array A:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of array B\n");
    scanf("%d", &m);
    printf("enter the elements of array B:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    Union();
    printf("\nIntersection:\n");
    Intersection();
    printf("\n");
    Difference();
    printf("\n");
    SymmetricDifference();
    printf("\n");
    CartesianProduct();

    printf("\n");
    char set[] = {'1', '2', '3', '4', '5'};
    int e = pow(2, 5);
    PowerSet(set, 5);
    printf("\nTotal subset in power set is : %d", e);
    return 0;
}