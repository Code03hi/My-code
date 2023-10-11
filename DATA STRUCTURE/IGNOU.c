#include<stdio.h>
typedef struct 
{
    int data[10];
    int count;
}list;
void insert(list *,int,int);
void create(list *);
void traverse(list *);
void insert(list * start,int position,int element)
{
    int temp=start->count;
    while (temp>=position)
    {
        start->data[temp+1]=start->data[temp];
        temp--;
    }
    start->data[position]=element;
    start->count++;
}
void create(list * start)
{
    int i=0,test=1;
    while (test)
    {
        fflush(stdin);
        printf("\n Input value for : %d : (Zero to come out) ",i);
        scanf("%d",&start->data[i]);
        if (start->data[i]==0)
        {
            test=0;
        }
        else
        {
            i++;
        }
    }
    start->count=i;
}
void traverse(list * start)
{
    int i;
    for ( i = 0; i < start->count; i++)
    {
        printf("\n Value at the position : %d : %d ",i,start->data[i]);
    }
}
void main()
{
    int position,element;
    list l;
    create(&l);
    printf("\n Element list as follows : \n");
    fflush(stdin);
    traverse(&l);
    fflush(stdin);
    printf("\n Input the position where you you want to add a new data item : ");
    scanf("%d",&position);
    fflush(stdin);
    printf("\n Input the value value for the position :");
    scanf("%d",&element);
    insert(&l,position,element);
    traverse(&l);
}
