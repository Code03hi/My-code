#include <stdio.h>
#include <stdlib.h>

struct Queue1
{
    int size;
    int f, r;
    int *arr;
};

void traverse(struct Queue1 *q)
{
    while (q->f!=q->r+1)
    {
        printf("Element : %d\n",q->arr[q->f]);
        q->f++;
    }
}

int isFull(struct Queue1 *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
        return 0;
}

int isEmpty(struct Queue1 *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    printf("Dequeue Operation In Not Perfrom, Because Queue Is Empty \n");
    return 0;
}

void enqueue(struct Queue1 *q, int key)
{
    if (isFull(q))
    {
        printf("Queue is full, No more Addition is Perform \n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = key;
        printf("Enqueue Operation Is Complete \n");
    }
}

int Dequeue(struct Queue1 *q)
{
    if (isEmpty(q))
    {
        printf("Dequeue Operation In Not Perfrom, Because Queue Is Empty \n");
    }
    else
    {
        int value = -1;
        q->f++;
        value = q->arr[q->f];
        printf("Dequeu Opeartion Is Perform \n");
        return value;
    }
}

int main()
{
    struct Queue1 q;
    q.size = 100;
    q.f = -1;
    q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    Dequeue(&q);
    enqueue(&q, 5);
    enqueue(&q, 4);
    enqueue(&q, 3);
    enqueue(&q, 2);
    traverse(&q);
    return 0;
}