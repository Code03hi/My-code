#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void insertIntoBST(struct node *root, int data)
{
    if (root == NULL)
    {
        return;
    }
    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    if (data < root->data)
    {
        root->left = insertIntoBST(root->left, data);
    }
}

void takeInput(struct node *root)
{
    int data;
    printf("Enter data : ");
    scanf("%d", &data);
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        takeInput(root);
    }
}

int main()
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root=NULL;
    printf("Enyer data to create BST \n");
    takeInput(root);
    return 0;
}