#include <iostream>
using namespace std;
class sw
{
    int m1, m2, m3;

public:
    sw()
    {
    }
    sw(int a1, int a2) : m1(a1), m2(a2)
    {
    }
    void print()
    {
        cout << "Before swaping " << endl;
        cout << "m1 :" << m1 << endl ;
        cout << "m2 :" << m2 << endl ;
    }
    void print1()
    {
        cout << "After swaping " << endl;
        cout << "m1 :" << m1 << endl ;
        cout << "m2 :" << m2 << endl ;
    }
    sw operator+();
};

sw sw ::operator+()
{
    //sw temp;
    m3 = m1;
    m1 = m2;
    m2 = m3;
    return *this;
}

int main()
{
    sw s1(1, 2);
    s1.print();
    +s1;
    s1.print1();
    return 0;
}