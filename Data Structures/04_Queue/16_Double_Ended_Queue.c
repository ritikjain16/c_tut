#include <stdio.h>
#include <stdlib.h>

struct DEQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct DEQueue *q)
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

int isFull(struct DEQueue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int enqueueRear(struct DEQueue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue Overflow\n");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
        printf("Enqueueuing element from rear is %d\n", val);
    }
}

int enqueueFront(struct DEQueue * q,int val){
    
    if (isEmpty(q))
    {
        printf("Queue Underflow\n");
    }
    else
    {
        q->f--;
        q->arr[q->f]=val;

        printf("Enqueueuing element from front is %d\n", val);
    }

}

int dequeueFront(struct DEQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue Underflow\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];

        printf("Dequeueuing element from front is %d\n", a);
    }
}

int dequeueRear(struct DEQueue *q)
{
    int a = -1;
    if (isFull(q))
    {
        printf("Queue Overflow\n");
    }
    else
    {
        q->r = q->r - 1;
        a = q->arr[q->r];

        printf("Dequeueuing element from rear is %d\n", a);
    }
}

void peek(struct DEQueue *q)
{
    if (q->r == -1)
    {
        printf("Empty\n");
    }
    else
    {
        for (int i = 0; i <= q->r; i++)
        {
            printf("%d  ", q->arr[i]);
        }
    }
}

int main()
{

    struct DEQueue *q = (struct DEQueue *)malloc(sizeof(struct DEQueue));
    q->size = 3;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    printf("%d\n", isEmpty(q));
    printf("%d\n", isFull(q));

    enqueueRear(q, 4);
    enqueueRear(q, 45);
    enqueueRear(q, 45);

    // dequeueFront(q);
    // dequeueFront(q);
    // dequeueFront(q);
    // dequeueRear(q);

    enqueueFront(q,89);
    
    // printf("%d\n", isEmpty(q));
    // printf("%d\n", isFull(q));

    peek(q);
    return 0;
}