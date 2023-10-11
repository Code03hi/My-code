#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node *CreateNode(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void preorder(struct node * root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *p = CreateNode((4));
    struct node *p1 = CreateNode((1));
    struct node *p2 = CreateNode((6));
    struct node *p3 = CreateNode((5));
    struct node *p4 = CreateNode((2));
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    postorder(p);
    printf("\n");
    preorder(p);
    return 0;
}