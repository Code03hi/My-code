#include<stdio.h>
#include<stdlib.h>
int search;
int flag;
int input(int *,int,int);
void Linear_Search(int *,int,int);
void Display(int *,int);

void Linear_Search(int m[],int n,int el)
{
    int k;
    flag =1;
    for ( k = 0; k < n; k++)
    {
        if (m[k]==el)
        {
            printf("\n Search is Successful \n");
            printf("Element : %i Found At Location : %i ",el,k+1);
            flag = 0;
        }
    }
    if (flag==1)
    {
        printf("\n Search Is Successful \n");
    }
}

void Display(int m[],int n)
{
    int i;
    for ( i = 0; i < 20; i++)
    {
        printf("%d ",m[i]);
    }
}

int input(int m[],int n,int el)
{
    int i;
    n = 20;
    m = 30;
    printf("Number Of Element in the list : %d",n);
    for ( i = 0; i < 20; i++)
    {
        m[i]==rand()%100;
    }
    printf("\n Element to be Searched : %d",el);
    search=el;
    return n;
}

void main()
{
    int n,el,m[200];
    int number = input(m,n,el);
    el=search;
    printf("\n Entered list as Follows : \n");
    Display(m,n);
    Linear_Search(m,n,el);
    printf("\n In The Following list \n");
    Display(m,n);
}