#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}


int isBST(struct node *root) // similar as inOrder function...
{
    static struct node *prev = NULL;

    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

int main()
{
    //                             10(p)
    //                            /      \
    //                       6(p1)         13(p2)
    //                       / \              / \
    //                  3(p3)   8(p4)    12(p5)  15(p6)
    //
    //
    //
    //
    //

    struct node *p = createnode(10);
    struct node *p1 = createnode(6);
    struct node *p2 = createnode(13);
    struct node *p3 = createnode(3);
    struct node *p4 = createnode(8);
    struct node *p5 = createnode(12);
    struct node *p6 = createnode(15);

    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->left = p5;
    p2->right = p6;

    inOrder(p); // inorder of a BST always in increasing order

    printf("\n%d\n", isBST(p));

    return 0;
}