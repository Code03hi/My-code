#include<iostream>
using namespace std;

class Mera
{
    public:
    void fun()
    {
        cout<<"I am a function with no arguments " << endl;
    }
    void fun(int x)
    {
        cout <<"I am a function with int argument "<< endl;
    }
    void fun(double v)
    {
        cout <<"I am a function with bouble argument " << endl;
    }
};

int main()
{
    Mera m;
    m.fun();
    m.fun(2);
    m.fun(2.33);
    return 0;
}