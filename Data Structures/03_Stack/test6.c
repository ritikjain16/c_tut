#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;

int isEmpty(struct node *top)
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

int isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void StackTraversal(struct node *ptr)
{
    printf("\nYour Stack is:\n\n");
    while (ptr != NULL)
    {
        printf("|__%d__|\n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct node *push(struct node *top)
{
    if (isFull(top))
    {
        printf("Overflow!\n");
    }
    else
    {
        int data;
        struct node *p = (struct node *)malloc(sizeof(struct node));
        printf("enter new data:\n");
        scanf("%d", &data);
        p->data = data;
        p->next = top;
        top = p;
        StackTraversal(top);
        return top;
    }
}


struct node *pop(struct node *tp)
{
    if (isEmpty(tp))
    {
        printf("Underflow!\n");
    }
    else
    {
        struct node *p = tp;
        top = tp->next;
        int x = p->data;
        // printf("%d Popped\n",x);
        StackTraversal(top);
        free(p);
        return top;
    }
}

int stackTop(struct node *top)
{
    return top->data;
}

int stackbottom(struct node *top)
{
    struct node *p = top;
    while (p->next != NULL)
    {
        p = p->next;
    }
    return p->data;
}

int main()
{

    int a = 1;
    while (a == 1)
    {

        int choice;
        printf("Enter your choice:\n1. Push\n2. Pop\n3. Stack Top\n4. Stack Bottom\n5. Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
        {

            int n;
            printf("How many times do you want to push into stack\n");
            scanf("%d", &n);
            for (int i = 1; i <= n; i++)
            {
                printf("%d. ", i);
                top = push(top);
            }
        }
        else if (choice == 2)
        {
            int n;
            printf("How many times do you want to pop into stack\n");
            scanf("%d", &n);
            for (int i = 1; i <= n; i++)
            {
                printf("%d. ", i);
                top = pop(top);
            }
        }
        else if(choice==3){
            printf("Stack Top is %d.\n",stackTop(top));
        }
        else if(choice==4){
            printf("Stack Bottom is %d.\n",stackbottom(top));
        }
        else if (choice == 5)
        {
            a++;
        }
        else
        {
            printf("Please choose correct choice\n");
        }
    }

    return 0;
}