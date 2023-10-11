#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    //data = (struct node *)malloc(sizeof(struct node));
};
struct  node * top;
void LinkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int IsFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
        return 1;
    else
        return 0;
}
int IsEmpty(struct node *ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    else
        return 0;
}
struct node *push(struct node *top, int x)
{
    if (IsFull(top))
    {
        printf("Stack overflow\n");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(struct node **top)
{
    if (IsEmpty(*top))
    {
        printf("Stack is underflow\n");
    }
    else
    {
        struct node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}
int peek(int pos)
{
    struct node * ptr = top;
    for (int i = 0; (i < pos-1 && top!=NULL); i++)
    {
        ptr=ptr->next;
    }
    if(ptr!=NULL)
    {
       return ptr->data;
    }
    else
    {
        return -1;
    }
}
int main()
{
    struct node * top = NULL;
    top = push(top, 78);
    top = push(top, 89);
    top = push(top, 99);
    LinkedListTraversal(top);
    for (int i = 0; i < 3; i++)
    {
        printf("Value at %d is %d\n",i,peek(i));
    }
    return 0;
}
