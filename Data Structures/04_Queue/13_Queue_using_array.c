#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f; // front
    int r; // rear
    int *arr;
};
int isEmpty(struct Queue *q)
{
    if (q->f == q->r)
    {
        // printf("yes Empty!\n");
        return 1;
    }
    else
    {
        // printf("not Empty!\n");
        return 0;
    }
}
int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        // printf("yes Full!\n");
        return 1;
    }
    else
    {
        // printf("not Full!\n");
        return 0;
    }
}
int Enqueue(struct Queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue overflow\n");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
    }
}
int Dequeue(struct Queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("Queue underflow\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->size = 3;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    printf("Full: %d\n", isFull(q));
    printf("Empty: %d\n", isEmpty(q));

    printf("Enqueue %d into the queue\n", Enqueue(q, 20));
    printf("Enqueue %d into the queue\n", Enqueue(q, 21));
    printf("Enqueue %d into the queue\n", Enqueue(q, 22));

    printf("Full: %d\n", isFull(q));
    printf("Empty: %d\n", isEmpty(q));

    printf("Dequeue %d from the queue\n", Dequeue(q));
    printf("Dequeue %d from the queue\n", Dequeue(q));
    printf("Dequeue %d from the queue\n", Dequeue(q));

    printf("Full: %d\n", isFull(q));
    printf("Empty: %d\n", isEmpty(q));

// after enueue and dequeue front and rear are at same position. so we cannot enqueue more elements. so we use circular queue.
    printf("Enqueue %d into the queue\n", Enqueue(q, 22));
    printf("Dequeue %d from the queue\n", Dequeue(q));    


    return 0;
}