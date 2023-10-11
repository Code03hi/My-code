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
void create(list * start)
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
list *delete_list(list *start)
{
    int key;
    list *f, *temp;
    printf("Enter the value of element to be deleted : ");
    scanf("%d", &key);
    while (start->data != key)
    {
        temp = temp->next;
        start = temp;
    }
    list *n = start->data;
    temp = start->next;
    free(n);
    return start;
}
int main()
{
    list *head = (list *)malloc(sizeof(list));
    create(head);
    printf("Traversing the list before Delete ");
    traverse(head);
    printf("Traversing the list after Delete ");
    head = delete_list(head);
    traverse(head);
    return 0;
}
