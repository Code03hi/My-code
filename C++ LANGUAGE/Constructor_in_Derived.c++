#include <iostream>
using namespace std;

class A
{
public:
    int a1, a2;
    A()
    {

    }
    A(int a, int b)
    {
        a1 = a;
        a2 = b;
    }
    void display1()
    {
        cout << "The value of a1 : " << a1 << endl;
        cout << "The value of a2 : " << a2 << endl;
    }
};
class B
{
public:
    int b1, b2;
    B()
    {

    }
    B(int a, int b)
    {
        b1 = a;
        b2 = b;
    }
    void display2()
    {
        cout << "The value of b1 : " << b1 << endl;
        cout << "The value of b2 : " << b2 << endl;
    }
};

class A_with_B : public A, public B
{
public:
    int c1, c2;
    A_with_B(int a1, int a2, int b1, int b2, int c1, int c2) : A(a1, a2), B(b1, b2)
    {
        this->c1 = c1;
        this->c2 = c2;
    }
    void display()
    {
        cout << "The value of c1 : " << c1 << endl;
        cout << "The value of c2 : " << c2 << endl;
    }
};

int main()
{
    A_with_B o1(25, 3, 4, 6, 8, 9);
    cout << "25,3,4,6,8,9" << endl;
    o1.display1();
    o1.display2();
    o1.display();
    return 0;
}