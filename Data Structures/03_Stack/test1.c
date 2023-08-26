#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("%d cannot be pushed ! Stack Overflow\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("%d is pushed into stack\n", value);
    }
}

void pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Cannot be popped ! Stack Underflow\n");
    }
    else
    {
        int value = ptr->arr[ptr->top];
        printf("%d is popped from stack\n", value);
        ptr->top--;
    }
}

void stacktop(struct stack *ptr)
{
    printf("stack top is %d\n", ptr->arr[ptr->top]);
}

void stackbottom(struct stack *ptr)
{
    printf("stack bottom is %d\n", ptr->arr[0]);
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("%d\n", isEmpty(s));
    printf("%d\n", isFull(s));

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    push(s, 6);

    printf("%d\n", isEmpty(s));
    printf("%d\n", isFull(s));

    pop(s);
    pop(s);
    pop(s);
    pop(s);
    // pop(s);
    // pop(s);

    printf("%d\n", isEmpty(s));
    printf("%d\n", isFull(s));

    stacktop(s);
    stackbottom(s);

    return 0;
}