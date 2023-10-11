#include <stdio.h>
#include <stdlib.h>
struct DEQueue
{
    int data;
    int *f;
    int *r;
    struct DEQueue *next;
};

struct DEQueue *f = NULL;
struct DEQueue *r = NULL;

void traverse(struct DEQueue *q)
{
    while (q != NULL)
    {
        printf("Element : %d\n", q->data);
        q = q->next;
    }
}

void Enqueue(int d)
{
    struct DEQueue *n = (struct DEQueue *)malloc(sizeof(struct DEQueue));
    if (n == NULL)
    {
        printf("Your Queue if Full ");
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

int Dequeue(void)
{
    int val=-1;
    struct DEQueue *n = (struct DEQueue *)malloc(sizeof(struct DEQueue));
    if(f=NULL)
    {
        printf("Your Queue id=s empty \n");
    }
    else
    { 
        f=f->next;
        val=n->data;
        free(n);
    }
    return val;
}

int main()
{
    struct DEQueue q1;
    Enqueue(5);
    Enqueue(6);
    Enqueue(6);
    traverse(f);
    return 0;
}