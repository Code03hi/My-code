#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head, *last;

void createList(int n);
void display();
void insertAtBeginning(int data);
void insertAtend(int data);
void insertAtN(int data, int position);

int main()
{
    system("cls");
    int n, data, choice = 1;
    head = NULL;
    last = NULL;
    while (choice != 0)
    {
        printf("======================\n");
        printf("DOUBLY LINKED LIST PROGRAM \n");
        printf("======================\n");
        printf("1. Create List\n");
        printf("2. Insert node - at Beginning \n");
        printf("3. Insert Node - at end \n");
        printf("4. Insert node - at N \n");
        printf("5. Display \n");
        printf("0. Exit \n");
        printf("======================\n");
        printf("Enter Your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the total number of nodes in list : ");
            scanf("%d", &n);
            createList(n);
            break;
        case 2:
            printf("Enter data of first node : ");
            scanf("%d", &n);
            insertAtBeginning(n);
            break;
        case 3:
            printf("Enter data of last node : ");
            scanf("%d", &n);
            insertAtend(n);
            break;
        case 4:
            printf("Enter the position where you want to insert new node : ");
            scanf("%d", &n);
            printf("Enter Data of %d node ", n);
            scanf("%d", &data);
            insertAtN(n, data);
            break;
        case 5:
            display();
            break;
        case 0:
            break;
        default:
            break;
        }
        printf("\n\n");
    }
    return 0;
}

void createList(int n)
{
    int data;
    struct node *newNode;
    newNode=head;
    if (n >= 1)
    {

        head = (struct node *)malloc(sizeof(struct node));
        printf("Enter the of 1 data : ");
        scanf("%d", &data);
        head->data = data;
        head->prev = NULL;
        head->next = NULL;

        last=head;

        for (int i = 2; i <= n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            printf("Enter the of %d data : ",i);
            scanf("%d", &data);
            newNode->data = data;
            newNode->prev=last;
            newNode->next=NULL;

            last->next=newNode;
            last=newNode;
        }
        printf("DOUBLY LINKED LIST CREATED SUCCESSFULLY \n");
    }
}

void display()
{
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    newNode=head;
    int n = 1;
    if (head == NULL)
    {
        printf("List is Empty \n");
    }
    else
    {
        printf("Data in the list \n");
        while (newNode!= NULL)
        {
            printf("Data of %d node = %d\n", n, newNode->data);
            newNode = newNode->next;
            n++;
        }
    }
}

void insertAtBeginning(int n)
{
    if (head == NULL)
    {
        printf("Error, List is Empty \n");
    }
    else
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = n;
        ptr->prev = NULL;
        ptr->next = head;
        head = ptr;
        head->prev = ptr;
        printf("NODE IS INSERTED SUCCESSFULLY AT THE BEGINNING OF THE LIST \n");
    }
}

void insertAtend(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("List is Empty \n");
    }
    else
    {
        while (head != NULL)
        {
            head = head->next;
        }
        ptr->data = data;
        head->next = ptr;
        ptr->prev = head;
        ptr->next = NULL;
        head = ptr;
        printf("NODE IS INSERTED SUCCESSFULLY AT THE END OF THE LIST \n");
    }
}

void insertAtN(int position, int data)
{
    int i = 1;
    struct node *temp;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("List is Empty \n");
    }
    else
    {
        while (i != position - 1 && head != NULL)
        {
            head = head->next;
            i++;
        }
        if (position == 1)
        {
            insertAtBeginning(data);
        }
        else if (temp == last)
        {
            insertAtend(data);
        }
        else if (head != NULL)
        {
            ptr->data = data;
            ptr->prev = head;
            ptr->next = head->next;
            if (head->next != NULL)
            {
                head->next->prev = head;
            }
            head->next = ptr;
            printf("NODE IS INSERTED SUCCESSFULLY AT %d POSITION \n");
        }
        else
        {
            printf("Error, Invalid position \n");
        }
    }
}