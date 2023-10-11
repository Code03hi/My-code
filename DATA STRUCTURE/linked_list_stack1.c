#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
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
        struct node * n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        
        top = n;
        return top;
    }
}
int pop(struct node *tp)
{
    if (IsEmpty(tp))
    {
        printf("Stack is underflow\n");
    }
    else
    {
        struct node *n = tp;
        top = (tp)->next;
        int x = tp->data;
        free(n);
        return x;
    }
}
int main()
{
    top = push(top, 78);
    printf("N ka Next is : %d\n",top->next);
    top = push(top, 89);
    printf("N ka Next is : %d\n",top->next);
    top = push(top, 99);
    printf("N ka Next is : %d\n",top->next);
    //int element = pop(top);
    //printf("Popped element is %d\n", element);
    LinkedListTraversal(top);
    return 0;
}