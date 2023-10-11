#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    int *f, *r;
    int size;
    struct Node *next;
};
struct Node *f = NULL;
struct Node *r = NULL;

void traverse(struct Node *q)
{
    printf("Printing the linked list element \n");
    while (q != NULL)
    {
        printf("Element %d \n", q->data);
        q = q->next;
    }
}

void EnQueue(int d)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Your Queue is Full ");
    }
    else
    {
        n->data = d;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int DeQueue(void)
{
    int val = -1;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (f == NULL)
    {
        printf("Your Queue is Empty \n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
    printf("Dequeueing Element : %d\n", DeQueue());
    EnQueue(6);
    EnQueue(9);
    EnQueue(8);
    traverse(f);
    printf("Dequeueing Element : %d\n", DeQueue());
    return 0;
}