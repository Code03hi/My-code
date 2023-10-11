#include<stdio.h>
#include<malloc.h>
struct dl_list
{
    int data;
    struct dl_list * right;
    struct dl_list * left;
};
typedef struct dl_list dlist;

void dl_create(dlist *);
void traverse(dlist *);
void dl_create(dlist * start)
{
    printf("Input the value of the element 0 to come out : ");
    scanf("%d",&start->data);
    if (start->data!=0)
    {
        start->right=(dlist * )malloc(sizeof(dlist));
        start->right->left=start;
        start->right->right=NULL;
        dl_create(start->right);
    }
    else
    start->right=NULL;
}
void traverse(dlist * start)
{
    printf("\n Traverse the list using right pointer \n");
    do
    {
        printf("%d = ",start->data);
        start=start->right;
    } while (start->right);
    
    printf("\n Traverse the list using left pointer \n");
    start=start->left;
    do
    {
        printf("%d = ",start->data);
        start=start->left;
    } while (start->right);
}
void main()
{
    dlist * head;
    head=(dlist *)malloc(sizeof(dlist));
    head->left=NULL;
    head->right=NULL;
    dl_create(head);
    printf("Created doubly linked list is as follow ");
    traverse(head);
}
