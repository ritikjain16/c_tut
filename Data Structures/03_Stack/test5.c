#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int stackBottom(struct stack *ptr)
{
    return ptr->arr[0];
}

int peek(struct stack *ptr, int i)
{
    int arrayIndex = ptr->top - i + 1;
    if (arrayIndex < 0)
    {
        printf("not a valid position of stack");
        return -1;
    }
    else
    {
        return ptr->arr[arrayIndex];
    }
}

void PrintStack(struct stack *ptr)
{
    printf("Your Stack is:\n\n");
    if (ptr->top == 0)
    {
        printf("top & Bottom    -->|__%d__|\n\n", stackTop(ptr));
    }
    else
    {
        printf("top    -->|__%d__|\n", stackTop(ptr));
        for (int i = 2; i <= ptr->top; i++)
        {
            printf("%d.     -->|__%d__|\n", i, peek(ptr, i));
        }
        printf("bottom -->|__%d__|", stackBottom(ptr));
        printf("\n\n");
    }
}

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

void push(struct stack *ptr)
{
    int value;
    if (isFull(ptr))
    {
        printf("%d cannot be pushed, Overflow!\n", value);
    }
    else
    {
        printf("Enter value:\n");
        scanf("%d", &value);
        ptr->top++;
        ptr->arr[ptr->top] = value;
        // printf("%d pushed into stack \n\n", value);
        PrintStack(ptr);
    }
}

void pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Underflow\n");
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        // printf("%d popped from stack\n\n", value);
        PrintStack(ptr);
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 5;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // printf("%d\n", isEmpty(s));
    // printf("%d\n", isFull(s));

    // int a = 1;
    // while (a == 1)
    // {

    //     int choice;
    //     printf("Enter your choice:\n1. Push\n2. Pop\n3. Exit\n");
    //     scanf("%d", &choice);

    //     if (choice == 1)
    //     {
    //         if (isEmpty(s))
    //         {
    //             push(s);
    //         }
    //         else if (isFull(s))
    //         {
    //             printf("Overflow!\n");
    //         }
    //     }
    //     else if (choice == 2)
    //     {
    //         if (isFull(s))
    //         {
    //             pop(s);
    //         }
    //         else
    //         {
    //             printf("Underflow!\n");
    //         }
    //     }
    //     else if (choice == 3)
    //     {
    //         exit(1);
    //     }
    //     else
    //     {
    //         printf("Please choose correct choice\n");
    //     }
    // }

    // push(s, 2);
    // push(s, 3);
    // PrintStack(s);

    // printf("%d\n", isEmpty(s));
    // printf("%d\n", isFull(s));


     push(s);
     push(s);
     push(s);


    // printf("%d\n", isEmpty(s));
    // printf("%d\n", isFull(s));

    pop(s);
    pop(s);
    pop(s);
    pop(s);
    // pop(s);
    // pop(s);
    // pop(s);

    // printf("%d\n", isEmpty(s));
    // printf("%d\n\n\n", isFull(s));

    // PrintStack(s);

    return 0;
}