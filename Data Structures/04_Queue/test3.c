#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *f = NULL;
struct node *r = NULL;

int isEmpty(struct node *ptr)
{
    if (f == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct node *ptr)
{
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (isFull(ptr))
    {
        printf("Queue overflow\n");
    }
    else
    {
        ptr->data = val;
        ptr->next = NULL;
        if (f == NULL)
        {
            f = r = ptr;
            printf("Enqueue %d into queue\n", val);
        }
        else
        {
            r->next = ptr;
            r = ptr;
            printf("Enqueue %d into queue\n", val);
        }
    }
}

void dequeue()
{
    int val = -1;
    struct node *ptr = f;
    if (isEmpty(ptr))
    {
        printf("Queue underflow\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
        printf("Dequeue %d from queue\n", val);
    }
}

void lltraversal(struct node *q)
{
    while (q != NULL)
    {
        printf("[%d][-]-> ", q->data);
        q = q->next;
    }
    printf("NULL");
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);

    lltraversal(f);
    printf("\n");
    dequeue();
    dequeue();
    dequeue();
    // dequeue();
    // dequeue();
    // dequeue();

    lltraversal(f);
    printf("\n");

    

    return 0;
}