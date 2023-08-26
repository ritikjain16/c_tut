#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *CreateNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void DataLeftRightNode(struct Node *n)
{
    printf("%d\n", n->data);
    printf("%d\n", *(n->left));
    printf("%d\n", *(n->right));
}

void PreOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void PostOrder(struct Node *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ", root->data);
    }
}

void InOrder(struct Node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}

int main()
{

    //                    4(p)
    //                    /  \
    //                1(p1)   2(p2)
    //                 / \       / \
    //              3(p3) 5(p4)  7(p5)  9(p6)

    // PreOrder -> 4 1 3 5 2 7 9
    // PostOrder-> 3 5 1 7 9 2 4
    // InOrder ->  3 1 5 4 7 2 9

    struct Node *p = CreateNode(4);
    struct Node *p1 = CreateNode(1);
    struct Node *p2 = CreateNode(2);
    struct Node *p3 = CreateNode(3);
    struct Node *p4 = CreateNode(5);
    struct Node *p5 = CreateNode(7);
    struct Node *p6 = CreateNode(9);

    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->left = p5;
    p2->right = p6;

    PreOrder(p);
    printf("\n");

    PostOrder(p);
    printf("\n");

    InOrder(p);
    printf("\n");

    return 0;
}