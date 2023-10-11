#include<iostream>
#include<fstream>

using namespace std;

template <class t>
class stack
{
    t * basePtr;
    int tip;
    int max;
    public:
    stack(int n){basePtr = new t[n];max=n,tip=0;}
    stack(const stack <t>&);
    ~stack(){delete[] basePtr;}
    stack<t>& operator = (const stack <t> &);
    bool empty(){return (tip==0);}
    bool push(const t& x);
    bool pop(t& x);
};

template<class t>
bool stack<t> ::push(const t& x)
{
    if (tip<max-1)
    {
        basePtr[tip++] = x; return true;
    }
    else return false;
}

template<class t>
bool stack<t>::pop(t& x)
{
    if (tip>0)
    {
        x=basePtr{--tip}; return true;
    }
    else return false;
}
