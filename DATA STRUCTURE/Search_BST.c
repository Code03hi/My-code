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

int count=0;

struct node * search(struct node * root,int key)
{
    if (root==NULL || root->key == key)
    {
        count++;
        return root;
    }
    if (key<root->key)
    {
        count++;
        return search(root->left,key);
    }
    if (key>root->key)
    {
        count++;
        return search(root->right,key);
    } 
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
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr = search(root,70);
    printf("\n");
    printf("We Done Find To %d In %d Times",ptr->key,count);
    return 0;
}