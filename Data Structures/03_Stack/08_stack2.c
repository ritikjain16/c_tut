#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int data)
{
    if (isFull(top))
    {
        printf("stack overflow\n");
    }
    else
    {
        struct Node *p = (struct Node *)malloc(sizeof(struct Node));
        p->data = data;
        p->next = top;
        top = p;
        return top;
    }
}

int pop(struct Node *tp)
{
    if (isEmpty(tp))
    {
        printf("stack underflow\n");
    }
    else
    {
        struct Node *p = tp;
        top = (tp)->next;
        int x = p->data;
        free(p);
        return x;
    }
}

int peek(int pos)
{
    struct Node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    
    
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int stackTop(struct Node *top)
{
    return top->data;
}
int stackBottom(struct Node *top)
{
    struct Node *p = top;
    while (p->next != NULL)
    {
        p = p->next;
    }

    return p->data;
}

void lltraversal(struct Node *ptr)
{
   
    while (ptr != NULL)
    {
        printf("Pushed element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    
    top = push(top, 94);
    top = push(top, 45);
    // top = push(top, 54);
    // top = push(top, 78);
    // top = push(top, 98);
    // top = push(top, 333);
    lltraversal(top);
    // printf("%d\n", stackTop(top));
    // printf("%d\n", stackBottom(top));

    int element = pop(top);
    printf("popped element is %d\n", element);
    int element1 = pop(top);
    printf("popped element is %d\n", element1);

    // for (int i = 1; i <= 6; i++)
    // {
    //     printf("value at position %d is %d\n", i, peek(i));
    // }

    return 0;
}