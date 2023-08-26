#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *f=NULL;
struct Node *r=NULL;

int isEmpty()
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
int isFull(struct Node *ptr)
{
    ptr = (struct Node *)malloc(sizeof(struct Node));
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
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (isFull(ptr))
    {
        printf("Queue is Full\n");
    }
    else
    {
        
        ptr->data = val;
        ptr->next = NULL;
        if (f == NULL)
        {
            f = r = ptr;
             printf("Enqueuing element is %d\n", val);
            
        }
        else
        {
            r->next = ptr;
            r = ptr;
            printf("Enqueuing element is %d\n", val);
        }
    }
}
void dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if (isEmpty(ptr))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
        printf("Dequeuing element is %d\n",val);
        
    }

}

void lltraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Queue element from front to rear is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
   
    enqueue(24);
    enqueue(36);

    lltraversal(f);

    dequeue();
    dequeue();

    lltraversal(f);

    return 0;
}