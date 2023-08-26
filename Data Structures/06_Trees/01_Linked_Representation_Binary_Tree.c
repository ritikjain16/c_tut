#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct node *DataLeftRightNode(struct node *n)
{
    printf("Data of this node is %d\n", n->data);
    printf("Left node data is %d\n", *(n->left));
    printf("Rigt node data is %d\n\n\n", *(n->right));
}

int main()
{
    printf("\n\n");
    printf("                  [][2][]                 \n");
    printf("                  /     \\                \n");
    printf("              [][1][]   [][4][]       \n\n\n");


    struct node *p = createNode(2);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(4);

    p->left = p1;
    p->right = p2;

    DataLeftRightNode(p);
    DataLeftRightNode(p1);
    DataLeftRightNode(p2);

    return 0;
}