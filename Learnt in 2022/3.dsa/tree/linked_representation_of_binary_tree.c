// Linked representation of binary tree.
#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main()
{
    /*
    // Root node
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = 10;
    p->left = NULL;
    p->right = NULL;

    // Child 1
    struct Node *p1 = (struct Node *)malloc(sizeof(struct Node));
    p1->data = 20;
    p1->left = NULL;
    p1->right = NULL;

    // Child 2
    struct Node *p2 = (struct Node *)malloc(sizeof(struct Node));
    p->data = 30;
    p2->left = NULL;
    p2->right = NULL;

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    */

        //Constructing the root node using fuctions
   struct Node *p=createNode(10);
   struct Node *p1=createNode(20);
   struct Node *p2=createNode(30);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;


    return 0;
}