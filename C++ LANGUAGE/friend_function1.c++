#include <iostream>
using namespace std;
// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealNumber(complex, complex);
    int sumComNumber(complex, complex);
};

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Individually declaring function as friend
    // friend int calculator ::sumRealNumber(complex o1, complex o2);
    // friend int calculator ::sumComNumber(complex o1, complex o2);
    // Alter : Declaring the entire calculator class as friend 
    friend class calculator;
    void printNumber(void)
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealNumber(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumComNumber(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(2, 5);
    o2.setNumber(8, 4);
    calculator calc;
    int result = calc.sumRealNumber(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;
    int resu = calc.sumComNumber(o1, o2);
    cout << "The sum of Imaginary part of o1 and o2 is " << resu << endl;
    return 0;
}