#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node list;

void insert(list *head)
{
    printf("Enter Number : ");
    scanf("%d", &head->data);
    if (head->data == 0)
    {
        head->next = NULL;
    }
    else
    {
        head->next = (list *)malloc(sizeof(list));
        insert(head->next);
    }
}

list *deleteFirst(list *head)
{
    list *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

list *deleteGiven(list *head, int index)
{
    int i = 0;
    list *p = head;
    list *q = head->next;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

list *deletebetween(list *head, int num)
{
    int i = 0;
    list *p = head;
    list *q = head->next;
    while (p->data!=num)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

void display(list *head)
{
    while (head->next != NULL)
    {
        printf("Element : %d\n", head->data);
        head = head->next;
    }
}

list *deletionLast(list *head)
{
    list *p = head;
    list *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

int main()
{
    list *head;
    insert(head);
    printf("BEFORE DELETION \n");
    display(head);
    head = deletebetween(head,5);
    // head = deletionLast(head);
    // head=deleteGiven(head,2);
    // head=deleteFirst(head);
    printf("AFTER DELETION \n");
    display(head);
    return 0;
}