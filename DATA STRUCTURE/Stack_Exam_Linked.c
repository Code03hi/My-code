#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define Capacity 10000

struct stack
{
    int data;
    struct stack *next;
} *top;

int size = 0;

void push(int element);
int pop();

int main()
{
    int choice, data;
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
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data to push into stack : ");
            scanf("%d", &data);
            break;
        case 2:
            data = pop();
            if (data != INT_MIN)
            {
                printf("Data => %d\n", data);
            }
            break;
        case 4:
            printf("Existing from app. \n");
            exit(0);
            break;
        default:
            printf("Invalid choice, Please try again. \n");
            break;
        }
        printf("\n");
    }
    return 0;
}

void push(int element)
{
    if (size >= Capacity)
    {
        printf("Stack Overflow, Can't add more element to stack. \n");
        return;
    }
    struct stack *newNode = (struct stack *)malloc(sizeof(struct stack));
    newNode->data = element;
    newNode->next = top;
    top = newNode;
    size++;
    printf("Data pushed to stack. \n");
}

int pop()
{
    int data = 0;
    struct stack *topNode;
    if (size <= 0 || !top)
    {
        printf("Stack is empty");
        return INT_MIN;
    }
    topNode = top;
    data = top->data;
    top = top->next;
    free(topNode);
    size--;
    return data;
}
