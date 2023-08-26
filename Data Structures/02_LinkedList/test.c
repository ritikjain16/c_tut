#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->next=NULL;
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

struct node *insertatFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
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
    p->next = ptr;

    return head;
}

struct node *insertatindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
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

struct node *insertafternode(struct node *head, struct node *prevnode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;

    return head;
}
// ------------------------------------------------------------------------------------

struct node *deleteatfirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *deleteatindex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);

    return head;
}
struct node *deleteatend(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node *deleteafternode(struct node *head, struct node *prevnode)
{
    struct node *p = head;
    while (p != prevnode->next)
    {
        p = p->next;
    }
    prevnode->next = p->next;
    free(p);
    return head;
}

struct node *deletevaluenode(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
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

// -----------------------------------------------------------------------------------------
void llsearch(int value, struct node *head)
{
    int index = 0;
    struct node *p = head;
    while (p != NULL)
    {
        if (p->data == value)
        {
            printf("Element with value %d found at index %d.\n", value, index);
            // break;
        }
        // else
        // {
        //     printf("Element not found\n");
        //     break;
        // }
        p = p->next;
        index++;
    }
}
// --------------------------------------------------------------------------------

void cirtraversal(struct node *head)
{
    struct node *p = head;
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);

    printf("\n");
}

struct node * iafirst(struct node * head,int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p= head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;
    
}

struct node * iaend(struct node * head,int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p= head;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=head;
    return head;
    
}

struct node * dafirst(struct node * head){
    struct node * ptr = head;
    while (ptr->next!=head)
    {
        ptr = ptr->next;
    }
    ptr->next=head->next;
    free(head);
    head=ptr->next;
    return head;
    
}

struct node * daend(struct node * head){
    struct node * p = head;
    struct node * q = head->next;
    while (q->next!=head)
    {
        p = p->next;
        q = q->next;
    }
    p->next=q->next;
    free(q);
    return head;
    
}

int main()
{
    struct node *head = createNode(4);
    struct node *n2 = createNode(5);
    struct node *n3 = createNode(6);
    struct node *n4 = createNode(7);

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    // n4->next = NULL;
    n4->next = head;

    // lltraversal(head);
    // --------------------------------------------------------------

    // head = insertatFirst(head, 8);
    // lltraversal(head);

    // head = insertatend(head, 1);
    // lltraversal(head);

    // head = insertatindex(head, 25, 1); // starts from 0,1,2....
    // lltraversal(head);

    // head = insertafternode(head,n2,34);
    // lltraversal(head);

    // ------------------------------------------------------------

    // head = deleteatfirst(head);
    // lltraversal(head);

    // head = deleteatindex(head,2); // starts from 0,1,2....
    // lltraversal(head);

    // head = deleteatend(head);
    // lltraversal(head);

    // head=deleteafternode(head,n2);
    // lltraversal(head);

    // head = deletevaluenode(head,5);
    // lltraversal(head);

    // -----------------------------------------------------------------

    // llsearch(6, head); // starts from 0,1,2....

    // ---------------------------------------------------------------

    // CIRCULAR
    cirtraversal(head);

    // head = iafirst(head,1);
    // cirtraversal(head);

    // head = iaend(head,9);
    // cirtraversal(head);

    head = dafirst(head);
    cirtraversal(head);

    head = daend(head);
    cirtraversal(head);

    return 0;
}