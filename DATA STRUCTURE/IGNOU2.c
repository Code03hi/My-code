#include <stdio.h>
#include<stdlib.h>
struct linked_list
{
    int data;
    int count;
    struct linked_list *next;
};
typedef struct linked_list list;
list *find(list *, int);
void create(list *start)
{
    printf("Enter the element : ");
    scanf("%d", &start->data);
    if (start->data == 0)
    {
        start->next = NULL;
    }
    else
    {
        start->next = (list *)malloc(sizeof(list));
        create(start->next);
    }
}
void traverse(list *start)
{
    int test = 0;
    while (start->next != NULL)
    {
        printf("Element at index %d is %d \n", test, start->data);
        start = start->next;
        test++;
    }
    start->count = test;
}
list * delete_linked(list * start)
{
    list * n=start;
    list * p =start->next;
    int element;
    printf("Enter the element which you want to delete : ");
    scanf("%d",&element);
    while (p->data!=element)
    {
        p=p->next;
        n=n->next;
    }
    if(n->data == element){
        p->next = n->next;
        free(n);
    }
    printf("Deleteed element is : %d\n",p->data);
    //int q=p->data;
    return start;
    //return q;
}
int main()
{
    list *start;
    create(start);
    traverse(start);
    start=delete_linked(start);
    printf("\n Traversing the list after Deletion \n");
    traverse(start);
    return 0;
}