#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node * right;
    struct node * left;
};

struct node *CreateNode(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data=data;
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

int main()
{
    struct node * p = CreateNode((4));
    struct node * p1 = CreateNode((6));
    struct node * p2 = CreateNode((8));
    struct node * p3 = CreateNode((10));
    struct node * p4 = CreateNode((12));
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    preorder(p);
    return 0;
}