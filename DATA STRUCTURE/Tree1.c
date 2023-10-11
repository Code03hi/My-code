#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root;

struct node *createNode(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

void printTree(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    printTree(root->left);
    printTree(root->right);
}

/*
1. preorder(data,left,right)
2. inorder(left,data,right)
3. postorder(left,right,data)
*/

int main()
{
    root = createNode(3);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->left->right->left = createNode(8);
    root->right->right->left = createNode(9);
    printTree(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postOrder(root);
    return 0;
}