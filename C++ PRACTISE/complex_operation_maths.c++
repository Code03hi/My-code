#include <iostream>
#include <string>
using namespace std;

class complex
{
    int real, imaginary;

public:
    complex()
    {
    }
    complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    complex operator+(complex b);
    complex operator-(complex b);
    complex operator*(complex b);
    complex operator/(complex b);
    void print()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

complex complex ::operator+(complex r2)
{
    cout << "Addition " << endl;
    real = real + r2.real;
    imaginary = imaginary + r2.imaginary;
    return *this;
}

complex complex ::operator-(complex r2)
{
    cout << "Addition " << endl;
    real = real - r2.real;
    imaginary = imaginary - r2.imaginary;
    return *this;
}

complex complex ::operator*(complex r2)
{
    cout << "Multiplication " << endl;
    real = real * r2.real;
    imaginary = imaginary * r2.imaginary;
    return *this;
}

complex complex ::operator/(complex r2)
{
    cout << "Division " << endl;
    real = real / r2.real;
    imaginary = imaginary / r2.imaginary;
    return *this;
}

int main()
{
    system("cls");
    complex c1(2, 3), c2(4, 6), c3;
    cout << "Before The Mathematical Operation Performance " << endl;
    c1.print();
    c2.print();
    char choice;
    cout << "Press a for addition " << endl;
    cout << "Press s for subtraction " << endl;
    cout << "Press m for multiplication " << endl;
    cout << "Press d for division " << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 'a':
        c3 = c1 + c2;
        c3.print();
        break;
    case 's':
        c3 = c1 - c2;
        c3.print();
        break;
    case 'm':
        c3 = c1 * c2;
        c3.print();
        break;
    case 'd':
        c3 = c1 / c2;
        c3.print();
        break;
    default:
        cout << "You choice wrong option " << endl;
        exit(0);
    }
    return 0;
}