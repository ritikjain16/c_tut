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

void push(struct stack *ptr, char value)
{
    if (isFull(ptr))
    {
        printf("%d cannot be pushed ! Stack Overflow\n", value);
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
        printf("Cannot be popped ! Stack Underflow\n");
    }
    else
    {
        char value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
char stacktop(struct stack *s)
{
    return s->arr[s->top];
}
// ------------------------------------------------

int pamatch(char *exp)
{
    struct stack *s;
    s->size = 10;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(s, exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            pop(s);
        }
    }
    if (isEmpty(s))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// -----------------------------------

int match(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}

int pamatch2(char *exp)
{
    char popped_ch;
    struct stack *s;
    s->size = 10;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(s, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            popped_ch = pop(s);
            if (!match(popped_ch, exp[i]))
            {
                return 0;
            }
        }
    }
    if (isEmpty(s))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// ------------------------------------------------------------
int isOperator(char a)
{
    if (a == '+' || a == '-' || a == '*' || a == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int precedence(char a)
{
    if (a == '*' || a == '/')
    {
        return 3;
    }
    else if (a == '+' || a == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

char *infixtopostfix(char *infix)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));

    int i = 0, j = 0;
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
            if (precedence(infix[i]) > precedence(stacktop(s)))
            {
                push(s, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(s);
                j++;
            }
        }
    }
    while (!isEmpty(s))
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{

    // char *exp = "(())";
    // if (pamatch(exp))
    // {
    //     printf("yes");
    // }
    // else
    // {
    //     printf("no");
    // }

    // ----------------------------------------------

    // char *exp = "[{()}]";
    // if (pamatch2(exp))
    // {
    //     printf("yes");
    // }
    // else
    // {
    //     printf("no");
    // }

    // ----------------------------------------------------

    char *infix="2+3-4*5/6";
    printf("%s\n",infixtopostfix(infix));


    return 0;
}