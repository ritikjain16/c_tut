#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int f, r, size, *arr;
};

int isEmpty(struct queue *q)
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

int isFull(struct queue *q)
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

void enqueue(struct queue *q)
{
    if (isFull(q))
    {
        printf("Overflow!\n");
    }
    else
    {
        int data;
        printf("Enter the queue data:\n");
        scanf("%d", &data);
        q->r++;
        q->arr[q->r] = data;
        printf("Enqueued %d\n", data);
    }
}

int dequeue(struct queue *q)
{
    int x = -1;
    if (isEmpty(q))
    {
        printf("Underflow!\n");
    }
    else
    {
        q->f++;
        x = q->arr[q->f];
    }
    return x;
}

int queueRear(struct queue *q)
{
    return q->arr[q->r];
}

int queueFront(struct queue *q)
{
    return q->arr[q->f];
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->f = q->r = -1;
    q->size = 5;
    q->arr = (int *)malloc(q->size * sizeof(int));

    printf("%d\n", isEmpty(q));
    printf("%d\n", isFull(q));

    enqueue(q);
    enqueue(q);
    enqueue(q);

    printf("Dequeued %d\n", dequeue(q));
    printf("Dequeued %d\n", dequeue(q));

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", q->arr[i]);
    }

    return 0;
}