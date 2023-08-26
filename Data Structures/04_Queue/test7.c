#include <stdio.h>
#include <stdlib.h>

struct cqueue
{
    int f, r, size, *arr;
};

int isEmpty(struct cqueue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct cqueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int rear(struct cqueue *q)
{
    return q->arr[q->r];
}

int front(struct cqueue *q)
{
    return q->arr[q->f];
}

void enqueue(struct cqueue *q)
{
    if (isFull(q))
    {
        printf("Overflow!\n");
    }
    else
    {
        int val;
        printf("Enter new value:\n");
        scanf("%d", &val);
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("%d enqueued\n", val);
    }
    printf("\nRear is %d and front is %d.\n",rear(q),front(q));
    
}

void dequue(struct cqueue *q)
{
    int val = -1;
    if (isEmpty(q))
    {
        printf("Underflow!\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        val = q->arr[q->f];
        printf("%d dequeued\n", val);
    }
    printf("\nRear is %d and front is %d.\n",rear(q),front(q));
}

int main()
{

    struct cqueue *q = (struct cqueue *)malloc(sizeof(struct cqueue));
    q->f = q->r = 0;
    q->size = 5;
    q->arr = (int *)malloc(q->size * sizeof(int));
    printf("\nRear is %d and front is %d.\n",rear(q),front(q));

    enqueue(q);
    enqueue(q);
    dequue(q);
    dequue(q);

    return 0;
}