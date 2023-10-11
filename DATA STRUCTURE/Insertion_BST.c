#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = data;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

struct node *insert(struct node *root, int key)
{
    if (root == NULL)
    {
        return newNode(key);
    }
    if (key > root->key)
    {
        root->right = insert(root->right, key);
    }
    if (key < root->key)
    {
        root->left = insert(root->left, key);
    }
    return root;
}

int main()
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inorder(root);
    return 0;
}