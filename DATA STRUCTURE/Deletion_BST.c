#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newCreate(struct node *root, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
}

struct node *insert(struct node *root, int data)
{
    if (root = NULL)
    {
        newCreate(root, data);
    }
    if (data < root->data)
    {
        root->left = insert(root, data);
        return root;
    }
    if (data > root->data)
    {
        root->right = insert(root, data);
        return root;
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

struct node * minValueNode(struct node * node)
{
    struct node * current = node ;
    while (current && current->data!=NULL)
    {
        current = current->left;
    }
    return current;
}

struct node *delete(struct node *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    if (data < root->data)
    {
        root->left = delete (root, data);
    }
    if (data > root->data)
    {
        root->right = delete (root, data);
    }
    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
        }
        struct node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = delete (root->right, temp->data);
    }
    return root;
}

int main()
{
    struct node *root = (struct node *)malloc(struct node);
    root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    printf("Inorder traversal of the given tree \n");
    inOrder(root);
    printf("\n Delete 20 \n");
    root=delete(root,20);
    printf("Inorder traversal of the modified tree \n");
    inOrder(root);
    printf("\n Delete 50\n");
    root=delete(root,50);
    printf("Inorder traversal of the modified tree \n");
    inOrder(root);
    return 0;
}