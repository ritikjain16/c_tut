#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *deletefirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteatIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i <= index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;

    free(q);
    return head;
}

struct Node *deleteatend(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;

    free(q);
    return head;
}

struct Node *deleteafterNode(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {

        p->next = q->next;

        free(q);
    }
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

    printf("\nlinked list before deletion\n");
    linkedListTraversal(head);

    printf("\nlinked list after deletion at first\n");
    head = deletefirst(head);
    linkedListTraversal(head);

    printf("\nlinked list after deletion at index\n");
    head = deleteatIndex(head, 2);
    linkedListTraversal(head);

    printf("\nlinked list after deletion at end\n");
    head = deleteatend(head);
    linkedListTraversal(head);

    printf("\nlinked list after deletion after a node\n");
    head = deleteafterNode(head, 21);
    linkedListTraversal(head);

    return 0;
}