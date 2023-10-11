#include <iostream>
using namespace std;

class c2;

class c1
{
    int Val;
    friend void exchange(c1 & ,c2 &);
public:
    void setdata(int value)
    {
        Val = value;
    }
    void display(void)
    {
        cout << Val << endl;
    }
};

class c2
{
    int Val2;
    friend void exchange(c1 &,c2 &);
public:
    void setdata(int value)
    {
        Val2 = value;
    }
    void display(void)
    {
        cout << Val2 << endl;
    }
};

void exchange(c1 & x, c2 & y)
{
    int temp = x.Val;
    x.Val = y.Val2;
    y.Val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.setdata(36);
    oc2.setdata(65);
    cout<< "The value of c1 before Exchnage ";
    oc1.display();
    cout<< "The value of c2 before Exchnage ";
    oc2.display();
    exchange(oc1,oc2);
    cout << "The value of c1 after Exchange becomes ";
    oc1.display();
    cout << "The value of c2 after Exchange becomes ";
    oc2.display();
    return 0;
}