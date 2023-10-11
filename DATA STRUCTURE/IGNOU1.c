#include <stdio.h>
#include <stdlib.h>

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
list *insert_list(list *start)
{
    list *ptr, *p;
    int i=0;
    ptr = (list*) malloc(sizeof(list));
    int position, element;
    p=start;
    printf("Enter value of new element : ");
    scanf("%d", &element);
    printf("Enter Index where you want to insert : ");
    scanf("%d", &position);
    while (i!=position)
    {
        p = p->next;
        i++;
    }
    p=p->next;
    ptr->data = element;
    ptr->next = p->next;
    p->next = ptr;
    return (start);
}
int main()
{
    list *start;
    create(start);
    traverse(start);
    start = insert_list(start);
    printf("\n Traversing the list after insert \n");
    traverse(start);
    return 0;
}
