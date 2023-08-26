#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *insertatfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->prev = NULL;

    ptr->next = head;

    head->prev = ptr;
    return ptr;
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
    ptr->next = NULL;
    ptr->prev = p->next;
    p->next = ptr;

    return head;
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

struct Node *insertafterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

struct Node *deleteatfirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
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

struct Node *deleteatIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i <= index - 2; i++)
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

    head->prev = NULL;
    head->data = 16;
    head->next = first;

    first->prev = head;
    first->data = 8;
    first->next = second;

    second->prev = first;
    second->data = 2000;
    second->next = third;

    third->prev = second;
    third->data = 21;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 9;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->data = 1998;
    fifth->next = NULL;

    printf("\nlinked list before insertion\n");
    linkedListTraversal(head);

    printf("\nlinked list after insertion at first\n");
    head = insertatfirst(head, 255);
    linkedListTraversal(head);

    printf("\nlinked list after insertion at end\n");
    head = insertatend(head, 256);
    linkedListTraversal(head);

    printf("\nlinked list after insertion after a node\n");
    head = insertafterNode(head, second, 257);
    linkedListTraversal(head);
    


    printf("\nlinked list after insertion at index\n");
    head = insertatindex(head, 258, 3);
    linkedListTraversal(head);

    printf("\nlinked list after deleting an element at end\n");
    head = deleteatend(head);
    linkedListTraversal(head);

    printf("\nlinked list after deleting an element at first\n");
    head = deleteatfirst(head);
    linkedListTraversal(head);

    printf("\nlinked list after deleting an element at index\n");
    head = deleteatIndex(head, 2);
    linkedListTraversal(head);

    printf("\nlinked list after deleting an element after node\n");
    head = deleteafterNode(head, 257);
    linkedListTraversal(head);

    return 0;
}