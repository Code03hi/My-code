#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
}; 

typedef struct node list;

list * insertAtFirst(list * head,int data)
{
    list * ptr = (list *)malloc(sizeof(list));
    ptr->data=data;
    list * p = head->next;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

void insert(list * head)
{
    printf("Enter Number : ");
    scanf("%d",&head->data);
    if(head->data==0)
    {
        head->next=head;
        head=insertAtFirst(head,6);
        head->next=NULL;
    }
    else
    {
        head->next=(list *)malloc(sizeof(list));
        insert(head->next);
    }
}

void display(list * head)
{
    list * ptr = head;
    do
    {
        printf("Data : %d\n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);     
}

int main()
{
    system("cls");
    list * head = (list *)malloc(sizeof(list));
    insert(head);
    printf("Before Insert \n");
    display(head);
    //head=insertAtFirst(head,6);
    printf("After Insert \n");
    display(head);
    return 0;
}