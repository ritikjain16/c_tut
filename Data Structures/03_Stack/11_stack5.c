#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
int stackTOP(struct stack *ptr)
{
    return ptr->arr[ptr->top];
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

// int match(char a,char b){
//     if(a=='(' && b==')'){
//         return 1;
//     }
//     if(a=='{' && b=='}'){
//         return 1;
//     }
//     if(a=='[' && b==']'){
//         return 1;
//     }
//     return 0;
// }
int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isOperator(char ch)
{
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char *infixToPostfix(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(char));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTOP(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    // char *infix = "x-y/z-k*d";
    char *infix = "p+q/r*h-k+25";
    // char *infix = "a+b-c*d/e";
    printf("\npostfix is %s\n\n", infixToPostfix(infix));
    return 0;
}