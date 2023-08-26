#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertatfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node *insertatindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertatend(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *insertafterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 16;
    head->next = first;

    first->data = 8;
    first->next = second;

    second->data = 2000;
    second->next = third;

    third->data = 21;
    third->next = fourth;

    fourth->data = 9;
    fourth->next = fifth;

    fifth->data = 1998;
    fifth->next = NULL;

    printf("\nlinked list before insertion\n");
    linkedListTraversal(head);

    // printf("\nlinked list after insertion after a node\n");
    // head = insertafterNode(head, second, 258);
    // linkedListTraversal(head);

    // printf("\nlinked list after insertion at first\n");
    // head = insertatfirst(head, 255);
    // linkedListTraversal(head);





    int n ;
    printf("enter at which index you want to insert (from 1 to 5)\n");
    scanf("%d",&n);
    int v;
    printf("Enter value\n");
    scanf("%d",&v);

    printf("\nlinked list after insertion at index\n");
    head = insertatindex(head, v, n);
    linkedListTraversal(head);







    // printf("\nlinked list after insertion at end\n");
    // head = insertatend(head, 257);
    // linkedListTraversal(head);

    return 0;
}