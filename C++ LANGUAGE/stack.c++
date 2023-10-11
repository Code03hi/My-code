#include<iostream>
#include<stdio.h>
//#include<process.h>

using namespace std;

class st
{
    public :
    int stack[30],top;
    st()
    {
        top=-1;
    }
    int pop(int stack[],int &top);
    void push(int stack[],int &top,int val,int n);
    void display(int stack[],int top);
};
void st:: push(int stack[],int &top,int val,int n)
{
    if(top<n)
    {
        top++;
        stack[top]=val;
    }
    else
    cout << "Stack is full";
}
int st::pop(int stack[],int &top)
{
    int delvalue;
    if(top>=0)
    {
        delvalue=stack[top];
        top--;
        return delvalue;
    }
    else
    {
        cout << "\n Stack is Empty";
        return (-99990);
    }
}
void display(int stack[],int top)
{
    int i;
    if(top=0)
    {
        cout << "\n";
        for(i=top;i>=0;i--)
        {
            cout << stack[i] << " ";
        }
        fflush(stdin);
    }
};
int main()
{
    st obj;
    int val,choice;
    do
    {
        cout << "\n Menu ";
        cout << "\n ==> Push 2 ==> Pop";
        cout << "\n 3==> Display 4 ==> Quit" ;
        cout << "Enter your choice ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            cout << "Enter the value to pushed ";
            cin >> val;
            obj.push(obj.stack,obj.top,val,30);
            break;
            case 2:
            val=obj.pop(obj.stack,obj.top);
            if(val!=99990)
            cout << "\n The popped last value of stack is " << val;
            break;
            case 3:
            obj.display(obj.stack,obj.top);
            break;
            case 4:
            exit(0);
            default:
            cout << "Wrong Value";
        }
    }while(choice!=4);
    return 0;
}