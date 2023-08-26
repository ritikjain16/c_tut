#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    return n;
}

void lltraversal(struct node *n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}

struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = head;
    head->prev = ptr;
    return ptr;
}
struct node *insertatend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
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
struct node *insertatindex(struct node *head, int index,int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node * q = head;
    int i=0;
    while(i!=index-1){
        q=q->next;
        i++;
    }
    ptr->data=data;
    ptr->next=q->next;
    q->next=ptr;
    return head;

}

int main()
{
    struct node *head = createNode(4);
    struct node *n2 = createNode(5);
    struct node *n3 = createNode(6);
    struct node *n4 = createNode(7);

    head->prev = NULL;
    head->next = n2;

    n2->prev = head;
    n2->next = n3;

    n3->prev = n2;
    n3->next = n4;

    n4->prev = n3;
    n4->next = NULL;

    lltraversal(head);

    // head = insertatfirst(head, 3);
    // lltraversal(head);

    // head = insertatend(head, 8);
    // lltraversal(head);

    head= insertatindex(head,2,45);
    lltraversal(head);

    return 0;
}