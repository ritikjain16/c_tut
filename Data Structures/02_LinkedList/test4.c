#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// typedef struct node* node1;

struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
    return n;
}

void lltraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);

    printf("\n");
}

// insertion
struct node *insertAtfirst(struct node *head, int data)
{
    struct node *p = head->next;
    struct node *ptr = createNode(data);
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct node *insertAtEnd(struct node *head, int data)
{
    struct node *p = head->next;
    struct node *ptr = createNode(data);
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    
    return head;
}


struct node * deleteatfirst(struct node * head){
    struct node * ptr = head;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=head->next;
    free(head);
    head = ptr->next;
    return head;
}

struct node * deleteatend(struct node * head){
    struct node*p=head;
    struct node * q = head->next;
    while(q->next!=head){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;

}


int main()
{
    struct node *head = createNode(4);
    struct node *first = createNode(5);
    struct node *second = createNode(54);

    head->next = first;
    first->next = second;
    second->next = head;

    lltraversal(head);

    head = insertAtfirst(head,10);
    lltraversal(head);

    head = insertAtEnd(head,20);
    lltraversal(head);

    head = deleteatfirst(head);
    lltraversal(head);

    head = deleteatend(head);
    lltraversal(head);


    return 0;
}