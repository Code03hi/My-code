#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * right;
    struct node * left;
};

struct node * CreateTree(int data)
{
    struct node * p = (struct node *)malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
}

void inOrder(struct node * root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int main()
{
    struct node * p = CreateTree(4);
    struct node * p1 = CreateTree(1); // left
    struct node * p2 = CreateTree(6); // right
    struct node * p3 = CreateTree(5); // left
    struct node * p4 = CreateTree(2); // 
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    inOrder(p);
    return 0;
}