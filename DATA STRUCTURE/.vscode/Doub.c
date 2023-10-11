#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *pre;
};

typedef struct node list;

void insert(list *head)
{
    printf("Enter Element : ");
    scanf("%d ", &head->data);
    if (head->data != 0)
    {
        head->next = (list *)malloc(sizeof(list));
        head->next->pre = head;
        head->next->next=NULL;
        insert(head->next);
    }
    else
    {
        head->next=NULL;
    }
}

void diplay(list * head)
{
    while (head->next->next!=NULL)
    {
        printf("Data : %d \n",head->data);
        head=head->next;
    } 
}

int main()
{
    system("cls");
    list *head;
    head->next=NULL;
    head->pre=NULL;
    insert(head);
    diplay(head);
    return 0;
}