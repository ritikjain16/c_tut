#include <stdio.h>
#include <malloc.h>

struct node
{
    struct node *left;
    struct node *right;
    int data;
};

struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));

    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void Preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
}

void PostOrder(struct node *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ", root->data);
    }
}

void Inorder(struct node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        printf("%d ", root->data);
        Inorder(root->right);
    }
}

int isBst(struct node *root)
{
    static struct node *prev = NULL;

    if (root != NULL)
    {

        if (!isBst(root->left))
        {
            return 0;
        }

        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;

        return isBst(root->right);
    }
    else
    {
        return 1;
    }
}

struct node *searchBST(struct node *root, int key)
{
    if (root == NULL)
    {
        printf("%d is not pesent\n", key);
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return searchBST(root->left, key);
    }
    else
    {
        return searchBST(root->right, key);
    }
}

struct node *IterativeSearchBST(struct node *root, int key)
{
    while (root != NULL)
    {
        if (root->data == key)
        {
            return root;
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
    return NULL;
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data == key)
        {
            printf("%d is already present\n", key);
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

    struct node *new = createNode(key);
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

    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(7);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(4);
    struct node *p5 = createNode(6);
    struct node *p6 = createNode(8);

    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->left = p5;
    p2->right = p6;

    // Preorder(p);
    // printf("\n");
    // PostOrder(p);
    // printf("\n");
    // Inorder(p);
    // printf("\n");

    // printf("%d\n", isBst(p));

    // int key = 6;

    // printf("%d is allocated in BST by %d\n", searchBST(p, key), *searchBST(p, key));
    // printf("%d is allocated in BST by %d\n", IterativeSearchBST(p, key), *IterativeSearchBST(p, key));

    insert(p, 1);
    Inorder(p);

    printf("\n");
    printf("\n");

    insert(p, 9);
    Inorder(p);

    printf("\n");
    printf("\n");

    insert(p, 11);
    Inorder(p);

    printf("\n");
    printf("\n");

    insert(p, 10);
    Inorder(p);

    printf("\n");
    printf("\n");

    insert(p, 100);
    Inorder(p);

    printf("\n");
    printf("\n");

    insert(p, 99);
    Inorder(p);

    return 0;
}