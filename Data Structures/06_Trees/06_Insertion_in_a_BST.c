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

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;

        if (root->data == key)
        {
            printf("%d cannot be inserted into BST,bcz it is already present.\n", key);
            return;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = createnode(key);

    if (prev->data > key)
    {
        prev->left = new;
        printf("%d is inserted at left of %d\n", key, prev->data);
    }
    else
    {
        prev->right = new;
        printf("%d is inserted at right of %d\n", key, prev->data);
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


    insert(p, 16);
    inorder(p);
    printf("\n");

    insert(p, 2);
    inorder(p);
    printf("\n");

    insert(p, 9);
    inorder(p);
    printf("\n");

    return 0;
}