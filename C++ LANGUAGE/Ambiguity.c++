#include<iostream>
using namespace std;

class Base1
{
    public:
    void greet(void)
    {
        cout<<" How Are You " << endl;
    }
};

class Base2
{
    public:
    void greet(void)
    {
        cout<<" Kaise ho ? " << endl;
    }
};

class Derived : public Base1,public Base2
{
    int a;
    public:
    void greet()
    {
        Base1::greet();
    }
};

class b
{
    int a;
    public:
    void say(void)
    {
        cout<<"Hello my Beautiful people  " << endl;
    }
};

class d : public b
{
    public:
    void say(void)
    {
        cout<<"Hello World " << endl;
    }
};

int main(){
    // Ambiguity 1
    /*Base1 obj1;
    Base2 obj2;
    obj1.greet();
    Derived d1;
    d1.greet();*/
    // Ambiguity 2
    b B;
    B.say();
    d D;
    D.say();
    return 0;
}