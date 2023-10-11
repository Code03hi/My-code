#include <stdio.h>
#include <stdlib.h>

struct Circular_Queue
{
    int size;
    int r;
    int f;
    int *arr;
};

void Traverse(struct Circular_Queue *q)
{
    for (int i = 0; i < q->r + 1; i++)
    {
        printf("Element is : %d \n", q->arr[i]);
    }
}

int isEmpty(struct Circular_Queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct Circular_Queue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void EnQueue(struct Circular_Queue *q, int val)
{
    if (isFull(q))
    {
        printf("Box is Overflow \n ");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}
int DeQueue(struct Circular_Queue *q)
{
    int val = -1;
    if (isEmpty(q))
    {
        printf("Your Queue is UnderFlow \n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        val = q->arr[q->f];
    }
    return val;
}

int main()
{
    struct Circular_Queue q;
    q.size = 4;
    q.f = 0;
    q.r = 0;
    q.arr = (int *)malloc(q.size * (sizeof(int)));
    EnQueue(&q, 25);
    EnQueue(&q, 42);
    EnQueue(&q, 15);
    EnQueue(&q, 35);
    Traverse(&q);
    printf("Dequeueing Elemnet is %d\n", DeQueue(&q));
    printf("Dequeueing Elemnet is %d\n", DeQueue(&q));
    printf("Dequeueing Elemnet is %d\n", DeQueue(&q));
    printf("Dequeueing Elemnet is %d\n", DeQueue(&q));
    EnQueue(&q, 35);
    if (isEmpty(&q))
    {
        printf("Queue is Empty \n");
    }
    else
    {
        printf("Queue Is Full \n ");
        return 0;
    }
}