#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *f = NULL;
struct node *r = NULL;

int isEmpty(struct node *q)
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

int isFull(struct node *q)
{
    q = (struct node *)malloc(sizeof(struct node));
    if (q == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void QueueTraversal(struct node *q)
{
    printf("\nQueue Traversal is : \n\n");
    while (q != NULL)
    {
        printf("[%d][-]-> ", q->data);
        q = q->next;
    }
    printf("NULL\n\n");
}

void Rearenqueue()
{
    struct node *q = (struct node *)malloc(sizeof(struct node));
    if (isFull(q))
    {
        printf("Overflow!\n");
    }
    else
    {
        int val;
        printf("Enter new value: \n");
        scanf("%d", &val);
        q->data = val;
        q->next = NULL;
        if (f == NULL)
        {
            f = r = q;
            printf("Enqueue %d into queue.\n", val);
        }
        else
        {
            r->next = q;
            r = q;
            printf("Enqueue %d into queue.\n", val);
        }
        QueueTraversal(f);
    }
}

void Frontenqueue()
{
    struct node *q = (struct node *)malloc(sizeof(struct node));
    if (isFull(q))
    {
        printf("Overflow!\n");
    }
    else
    {
        int val;
        printf("Enter new value: \n");
        scanf("%d", &val);
        q->data = val;
        q->next = f;
        if (f == NULL)
        {
            f = r = q;
            printf("Enqueue %d into queue.\n", val);
        }
        else
        {
           f=q;
            printf("Enqueue %d into queue.\n", val);
        }
        QueueTraversal(f);
    }
}

void Frontdequeue()
{
    int val = -1;
    struct node *q = f;
    if (isEmpty(q))
    {
        printf("Underflow!\n");
    }
    else
    {
        f = f->next;
        val = q->data;
        free(q);
        QueueTraversal(f);
    }
}

void Reardequeue()
{
    int val = -1;
    struct node *q = f;
    if (isEmpty(q))
    {
        printf("Underflow!\n");
    }
    else
    {
        while(q->next!=NULL){
        q=q->next;
        }
        val = q->data;
        printf("%d\n",val);
        r=q;
        r->next=NULL;
        free(q);

        QueueTraversal(f);
    }
}

int main()
{

    Rearenqueue();
    Rearenqueue();
    // Frontdequeue();
    //    Frontenqueue();
    //    Frontenqueue();
       Reardequeue();

    // int a = 1;
    // while (a == 1)
    // {
    //     printf("Enter your choice:\n1. Enqueue\n2. Dequeue\n3. Exit\n");
    //     int ch;
    //     scanf("%d", &ch);
    //     if (ch == 1)
    //     {
    //         int n;
    //         printf("How many times do you want to enqueue ?\n");
    //         scanf("%d", &n);
    //         for (int i = 1; i <= n; i++)
    //         {
    //             Rearenqueue();
    //         }
    //     }
    //     else if (ch == 2)
    //     {
    //         int n;
    //         printf("How many times do you want to dequeue ?\n");
    //         scanf("%d", &n);
    //         for (int i = 1; i <= n; i++)
    //         {
    //             Frontdequeue();
    //         }
    //     }
    //     else if (ch == 3)
    //     {
    //         a++;
    //     }
    //     else
    //     {
    //         printf("Enter correct choice\n");
    //     }
    // }

    return 0;
}