#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *CreateNode(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->left = NULL;
    p->reight = NULL;
    return p;
}

int main()
{
    /*
    // constructing the root node
    struct node * 1;
    p1 = (struct node *)malloc(sizeof(struct node));
    p1->left = NULL;
    p1->reight = NULL;
    // constructing the root node
    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p2->left = NULL;
    p2->reight = NULL;
    // constructing the root node
    struct node *p3;
    p3 = (struct node *)malloc(sizeof(struct node));
    p3->left = NULL;
    p3->reight = NULL;
     */
    // linking the root node with and right children
    p->left = p1;
    p->right p2;
    return 0;
}