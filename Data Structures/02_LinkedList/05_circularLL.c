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

    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}
struct Node *insertatend(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = head;
    return head;
}
struct Node *deleteatfirst(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = head->next;

    free(head);
    head = ptr->next;

    return head;
}

struct Node *deleteatend(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;

    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
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
    fifth->next = head;

    printf("\nlinked list before insertion\n");
    linkedListTraversal(head);

    printf("\nlinked lis tafter insertion at first\n");
    head = insertatfirst(head, 255);
    linkedListTraversal(head);

    printf("\nlinked list after insertion at end\n");
    head = insertatend(head, 258);
    linkedListTraversal(head);

    printf("\nlinked list after deleting element at first\n");
    head = deleteatfirst(head);
    linkedListTraversal(head);

    printf("\nlinked list after deleting an element at end\n");
    head = deleteatend(head);
    linkedListTraversal(head);
    return 0;
}