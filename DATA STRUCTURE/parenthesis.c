#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
    struct stack * next;
};
int i = 0;
int isEmpty(struct stack *ptr)
{

    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct stack *push(struct stack * top, int x)
{
    if (isFull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct stack *n = (struct stack *)malloc(sizeof(struct stack));
        n->top = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct stack *top)
{
    if (isEmpty(top))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        struct stack *n = top;
        top = (top)->next;
        int x = n->top;
        free(n);
        return x;
    }
}
int parenthesesisMatch(char *exp)
{
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp);
        }
        else if (exp[i] != ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
        // pop(sp);
    }
}

int main()
{
    char *exp = "8*(9)";
    if (parenthesesisMatch(exp))
    {
        printf("The Parenthesis is Match");
    }
    else
    {
        printf("The Parenthesis is Not Match");
    }
    return 0;
}