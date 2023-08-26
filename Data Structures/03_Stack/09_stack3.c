#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
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
void push(struct stack *ptr, char value)
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
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow! cannot pop from stack.\n");
    }
    else
    {

        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int paranthesismatch(char *exp)
{
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *exp = "(8)";

    //  only check the equal paranthesis not validity of expression..

    if (paranthesismatch(exp))
    {
        printf("\nParanthesis is matching\n\n");
    }
    else
    {
        printf("\nParanthesis is not matching\n\n");
    }

    return 0;
}