#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

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
    
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * first = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fifth = (struct Node *)malloc(sizeof(struct Node));

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

linkedListTraversal(head);
    return 0;
}
