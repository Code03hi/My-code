#include <stdio.h>
#include <stdlib.h>
struct node
{
    int * data;
    struct node *next;
    //data = (struct node *)malloc(sizeof(struct node));
};
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
        n->data[0] = x;
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
        int x = n->data[0];
        free(n);
        return x;
    }
}
int main()
{
    struct node * top = NULL;
    top = push(top, 78);
    top = push(top, 89);
    top = push(top, 99);
    int bot=stack_bottom(top);
    printf("Bottom Element : %d\n",bot);
    int element = pop(&top);
    printf("Popped element is %d\n", element);
    LinkedListTraversal(top);
    return 0;
}