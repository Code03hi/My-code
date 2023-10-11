#include<iostream>
using namespace std;
#define max 100
class point_stack
{
    int * arr;
    int tos;
    public:
    point_stack()
    {
        tos=0;
        cout << "Stack Initialised \n";
    }
    void push(int i)
    {
        if(tos == max)
        {
            cout << "Stack is full \n";
            return ;
        }
    *arr = i;
    tos++;
    arr++;
    }
    int pop()
    {
        if(tos==0)
        {
            cout << "Stack Overflow \n";
            return 1;
        }
        arr--;
        return *arr;
    }
    ~point_stack()
    {
        cout << "Stack Destroyed \n";
    }
};
int main()
{
    point_stack a,b;
    a.push(1);
    b.push(2);
    a.push(3);
    b.push(4);
    cout << a.pop() << "\n";
    cout << a.pop() << "\n";
    cout << b.pop() << "\n";
    cout << b.pop() << "\n";
    return 0;
}