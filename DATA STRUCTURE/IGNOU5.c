#include<stdio.h>
#include<stdlib.h>
#define NULL 0;
struct linked_list
{
    int data;
    struct linked_list * next;
};
typedef struct linked_list clist;
clist * head,*s;
void main()
{
    void create_clist(clist *);
    int count(clist *);
    void traverse(clist *);
    head=(clist *)malloc(sizeof(clist));
    s=head;
    create_clist(head);
    printf("\n Traversing=g the created clist and the startinf adddresss is %u \n",head);
    traverse(head);
    printf("\n Number of element in the clist %d\n",count(head));
}
