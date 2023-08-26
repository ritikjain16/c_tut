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

// Recursive Search in BST.
struct node *searchBST(struct node *root, int key)
{
    if (root == NULL)
    {
        printf("%d is not present in Binary Search Tree\n",key);
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

    
   int key = 3;

    printf("%d memory is allocated by %d.\n",searchBST(p,key),*searchBST(p,key));
    printf("%d\n",*searchBST(p,key));

    key = 7;
    
    printf("%d memory is allocated by %d.\n",searchBST(p,key),*searchBST(p,key));
    printf("%d\n",*searchBST(p,key));
    

    return 0;
}