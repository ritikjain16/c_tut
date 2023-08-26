#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};


int isEmpty(struct stack * ptr)
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

int push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("stack overflow! %d cannot be inserted into stack.\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}


int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow! cannot pop from stack.\n");
    }
    else
    {

        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int peek(struct stack *ptr,int i){
    int arrayIndex=ptr->top-i+1;
    if(arrayIndex<0){
        printf("not a valid position of stack");
        return -1;
    }
    else
    {
        return ptr->arr[arrayIndex];
    }
    
}

int stackTOP(struct stack* ptr){
 return ptr->arr[ptr->top];
}

int stackBottom(struct stack* ptr){
 return ptr->arr[0];
}



int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("\nstack is created successfully\n");
    // s->arr[0] = 16;
    // s->top++;
    // if (isEmpty(s))
    // {
    //     printf("stack is empty");
    // }
    // else
    // {
    //     printf("stack is not empty");
    // }
    printf("before pushing, Full: %d\n", isFull(s));
    printf("before pushing, Empty: %d\n", isEmpty(s));
    push(s, 54);
    push(s, 55);
    push(s, 263);
    push(s, 57);
    push(s, 59);
    push(s, 654);
    push(s, 567);
    push(s, 569);

    printf("%d\n",stackTOP(s));
    printf("%d\n",stackBottom(s));

    printf("pushed %d into the stack\n", push(s, 50));
    printf("pushed %d into the stack\n", push(s, 65));
    printf("popped %d from the stack\n", pop(s));
    printf("popped %d from the stack\n", pop(s));

    printf("after pushing, Full: %d\n", isFull(s));
    printf("after pushing, Empty: %d\n", isEmpty(s));

    for (int i = 1; i <= s->top; i++)
    {
        printf("the value at position %d is %d\n",i,peek(s,i));
    }
    

    return 0;
}