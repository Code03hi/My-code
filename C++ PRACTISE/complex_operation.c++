#include <iostream>
#include <string.h>
using namespace std;

class complex
{
    int imaginary;
    int real;

public:
    complex()
    {}
    complex(int im, int re)
    {
        imaginary = im;
        real = re;
    }
    void print()
    {
        cout << imaginary << " + " << real << "i" << endl;
    }
    complex operator+(complex);
    complex operator++();
    complex operator++(int);
};

complex complex ::operator + (complex r)
{
    complex temp;
    temp.imaginary = imaginary + r.imaginary;
    temp.real = real + r.real;
    return *this;
}

complex complex ::operator++()
{
    ++imaginary;
    ++real;
    return *this;
}

complex complex ::operator++(int x)
{
    ++imaginary;
    ++real;
    return *this;
}

int main()
{
    complex A(2, 3), B(3, 6);
    A.print();
    B.print();
    complex C;
    C = A + B;  // with the help of A refrence call the + (plus operator) as an argument passing the B return output stored in C
    C.print();
    ++A;
    cout << endl;
    A.print();
    C = ++A;
    C.print();
    A++;
    A.print();
}