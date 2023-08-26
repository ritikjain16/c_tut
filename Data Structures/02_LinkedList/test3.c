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

void lltraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// -------------------------------------------
// insertion

struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = createNode(data);
    ptr->next = head;
    return ptr;
}

struct node *insertAtend(struct node *head, int data)
{
    struct node *ptr = createNode(data);
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

struct node *insertAtindex(struct node *head, int data, int index)
{
    struct node *ptr = createNode(data);
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node *insertAfterNode(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = createNode(data);

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

// -------------------------------------
void search(int element, struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        if (p->data == element)
        {
            printf("%d found\n", element);
            break;
        }
        else
        {
            printf("%d not found\n", element);
            break;
        }
        p = p->next;
    }
}

// deletion

struct node * deleteAtfirst(struct node * head){
    struct node * p = head;
    head = head->next;
    free(p);
    return head;
}

struct node * deleteAtend(struct node * head){
    struct node * p = head;
    struct node * q = head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct node * deleteAtIndex(struct node * head,int index){
    struct node * p = head;
    struct node * q = head->next;
    int i=0;
    while(i!=index-1){
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    return head;
}

struct node * deleteAfterNode(struct node * prevNode,struct node * head){
    struct node * p=prevNode->next;
    
    prevNode->next=p->next;
    free(p);
    return head;
}

int main()
{
    struct node *head = createNode(4);
    struct node *first = createNode(5);
    struct node *second = createNode(54);

    head->next = first;
    first->next = second;

    lltraversal(head);

    head = insertAtFirst(head, 23);
    lltraversal(head);

    head = insertAtend(head, 10);
    lltraversal(head);

    head = insertAtindex(head, 20, 3);
    lltraversal(head);

    head = insertAfterNode(head, second, 63);
    lltraversal(head);

    // search(54, head);

    head = deleteAtfirst(head);
    lltraversal(head);

    head = deleteAtend(head);
    lltraversal(head);

    head = deleteAtIndex(head,2);
    lltraversal(head);

    head = deleteAfterNode(second,head);
    lltraversal(head);

    return 0;
}