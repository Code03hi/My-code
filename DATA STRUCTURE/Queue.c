#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

void Traverse(struct Queue *q)
{
    for (int i = 0; i < q->r + 1; i++)
    {
        printf("Element is : %d \n", q->arr[i]);
    }
}

int IsEmpty(struct Queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
        return 0;
}

int IsFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
        return 0;
}

int Dequeue(struct Queue *q)
{
    int a = -1;
    if (IsEmpty(q))
    {
        printf("This is Queue is Empty ");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

void Enqueue(struct Queue *q, int val)
{
    if (IsFull(q))
    {
        printf("This is Queue is full ");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int main()
{
    struct Queue q;
    q.f = q.r = -1;
    q.size = 100;
    q.arr = (int *)malloc(q.size * sizeof(int));
    /*if(IsEmpty(&q))
    {
        printf("Queue is Empty");
    } */
    Enqueue(&q, 12);
    Enqueue(&q, 15);
    Traverse(&q);
    printf("Dequeueing Elemnet is %d\n", Dequeue(&q));
    return 0;
}