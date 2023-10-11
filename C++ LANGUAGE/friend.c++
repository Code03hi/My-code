#include<iostream>
using namespace std;

class y;

class x
{
    int data;
    friend void add(x,y);
    public:
    void setvalue(int value)
    {
        data= value;
    }
};

class y
{
    int data;
    friend void add(x,y);
    public:
    void setvalue(int value)
    {
        data=value;
    }
};

void add(x o1,y o2)
{
    cout<<"Suming datas of x and y object gives me " << o1.data + o2.data << endl;
}

int main()
{
    x o1;
    o1.setvalue(6);
    y o2;
    o2.setvalue(7);
    add(o1,o2);
    return 0;
}