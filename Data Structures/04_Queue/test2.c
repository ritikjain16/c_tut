#include <stdio.h>
#include <malloc.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
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
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int enqueue(struct queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue overflow\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = value;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue Underflow\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int front(struct queue *q)
{
    return q->arr[q->f];
}

int rear(struct queue *q)
{
    return q->arr[q->r];
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->f = q->r = 0;
    q->size = 4;
    q->arr = (int *)malloc(q->size * sizeof(int));

    printf("\n%d\n", front(q));
    printf("%d\n", rear(q));

    printf("\n%d\n", isEmpty(q));
    printf("%d\n", isFull(q));

    printf("enqueue %d into queue\n", enqueue(q, 1));
    printf("enqueue %d into queue\n", enqueue(q, 2));
    printf("enqueue %d into queue\n", enqueue(q, 3));
    

    printf("\n%d\n", front(q));
    printf("%d\n", rear(q));

    printf("\n%d\n", isEmpty(q));
    printf("%d\n", isFull(q));

    printf("\ndequeue %d from queue\n", dequeue(q));
    printf("dequeue %d from queue\n", dequeue(q));
    printf("dequeue %d from queue\n", dequeue(q));


    printf("\n%d\n", front(q));
    printf("%d\n", rear(q));

    printf("\n%d\n", isEmpty(q));
    printf("%d\n", isFull(q));

    // printf("enqueue %d into queue\n", enqueue(q, 4));
    // printf("dequeue %d from queue\n", dequeue(q));

    
    printf("enqueue %d into queue\n", enqueue(q, 1));
    printf("enqueue %d into queue\n", enqueue(q, 2));

    
    printf("\n%d\n", front(q));
    printf("%d\n", rear(q));

    return 0;
}