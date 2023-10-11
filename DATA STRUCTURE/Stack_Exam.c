#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define Size 100

int stack[Size];
int top = -1;

void push(int element);
int pop();

int main()
{
    int choice,data;
    while (1)
    {
        printf("________________________________\n");
        printf("  STACK IMPLIMENTATION PROGRAM  \n");
        printf("________________________________\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Size\n");
        printf("4. Exit\n");
        printf("________________________________\n");
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to push into stack : ");
            scanf("%d",&data);
            break;
        case 2:
        data = pop();
        case 3:
        printf("Stack size : %d\n",top+1);
        break;
        case 4:
        printf("Existing From app . \n");
        exit(0);
        break;
        default:
        printf("Invalid choice, Please try Again. \n");
            break;
        }
        printf("\n\n");
    }
    return 0;
}

void push(int element)
{
    if (top>= Size)
    {
        printf("Stack Overflow, Can't add more element to stack. \n");
        return ;
    }
    top++;
    stack[top]=element;
    printf("Data pushed to stack. \n");
}

int pop()
{
    if (top<0)
    {
        printf("Stack is Empty. \n");
        return INT_MIN;
    }
    return stack[top--];
}