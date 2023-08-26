#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct circularQueue *q)
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
void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is Full\n");
    }
    else
    {
        q->r = (q->r + 1) % (q->size);
        q->arr[q->r] = val;
        printf("Enqueueing element %d\n", val);
    }
}
void dequeue(struct circularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        q->f = (q->f + 1) % (q->size);
        a = q->arr[q->f];
        printf("Dequeueing element %d\n", a);
    }
}

int main()
{
    struct circularQueue q;
    q.size = 4; //(if size 4 then we can insert only 3 elements i.e. (n-1)elements)
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * (sizeof(int)));

    if (isEmpty(&q))
    {
        printf("Queue is Empty\n");
    }
    else if (isFull(&q))
    {
        printf("Queue is Full\n");
    }
    else
    {
        printf("Queue is neither Empty nor Full\n");
    }

    // Enqueue

    enqueue(&q, 16);
    enqueue(&q, 8);
    enqueue(&q, 2000);

    if (isEmpty(&q))
    {
        printf("Queue is Empty\n");
    }
    else if (isFull(&q))
    {
        printf("Queue is Full\n");
    }
    else
    {
        printf("Queue is neither Empty nor Full\n");
    }

    // Dequeue

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    if (isEmpty(&q))
    {
        printf("Queue is Empty\n");
    }
    else if (isFull(&q))
    {
        printf("Queue is Full\n");
    }
    else
    {
        printf("Queue is neither Empty nor Full\n");
    }

    //  we can do enqueue in circular queue but noi in simple queue .
    enqueue(&q, 9);
    dequeue(&q);

    return 0;
}