#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(struct node *root, int data)
{
    if (root != NULL)
    {
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
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
        printf("%d " ,root->data);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

struct node *searchIter(struct node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return (root);
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

void insert(struct node *root, int key)
{
    struct node *prev;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("Cannot insert %d , already in BST", key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
        struct node *new = create(root, key);
        if (key < prev->data)
        {
            prev->left = new;
        }
        else
        {
            prev->right = new;
        }
    }
}

struct node *inOrderProdecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value)
{
    struct node * iPre;
    if (root==NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        iPre = inOrderProdecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left,iPre->data);
    }
    return root;
}

int main()
{
    struct node * root = (struct node *)malloc(sizeof(struct node));
    root=NULL;
    root = create(root,7);
    root->left=create(root,4);
    root->right=create(root,3);
    root->right->left=create(root,5);
    root->left->right=create(root,8);
    root->left->left=create(root,9);
printf("bhsh");
    inorder(root);
    printf("\n");
    deleteNode(root, 3);
    inorder(root);

    return 0;
}
