#include<stdio.h>


void maxHeapify(int a[],int ,int );
void maxheap(int a[],int beg,int end)
{
    int i;
    for ( i = end/2; i >= beg; i--)
    {
        maxHeapify(a,i,end);
    }
}

void maxHeapify(int a[],int f,int size)
{
    int max = f,l = f*2 ,r= f*2+1,t;
    if (l<=size && a[l] > a[max])
    {
        max=1;
    }
    if (r<= size && a[r] > a[max])
    {
        max=r;
    }
    if (f!=max)
    {
        t=a[f];
        a[f]=a[max];
        a[max] = t;
        maxHeapify(a,max,size);
    }
}

void heapsort(int a[],int size)
{
    int i,t;
    for ( i = size; i >= 2; i--)
    {
        t=a[1];
        a[1]=a[i];
        maxHeapify(a,1,i-1);
    }
}

void main()
{
    int a[5],i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter Array Element : ");
        scanf("%d ",&a[i]);
    }
    maxheap(a,1,9);
    heapsort(a,9);
    printf("\n Sorted Array \n ");
    for ( i = 1; i < 5; i++)
    {
        printf("%4d ",a[i]);
    }
}