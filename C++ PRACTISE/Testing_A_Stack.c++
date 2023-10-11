#include<iostream>
#include<iomanip>
using namespace std;

#include "stack.h"

typedef stack<unsigned>USTACK;
void fill(USTACK & stk);
void clear(USTACK & stk);

int main()
{
    USTACK ustk(256);
    fill(ustk);
    USTACK ostk(ustk);
    cout << "The copy : " << endl;
    clear(ostk);
    return 0;
}

void fill(USTACK & stk)
{
    unsigned x;
    cout << "Enter positive integers (quit with 0) : \n";
    while (cin>>x && x!=0)
    {
        if (!stk.push(x))
        {
            cerr << "Stack is full !"; break;
        }
    }
}

void clear(USTACK & stk)
{
    if (stk.empty())
    {
        cerr << "Stack is Empty!" << endl;
    }
    else
    {
        unsigned x;
        while (stk.pop(x))
        {
            cout << setw(8) << x << " ";
            cout << endl;
        }
        
    }
}