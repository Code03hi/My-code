#include <iostream>
#include <string>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void get_input()
    {
        cout << "\n Enter the real part of the complex : ";
        cin >> real;
        cout << "\n Enter the imaginary part of the complex : ";
        cin >> imaginary;
    }

    void operator+(complex);
    void operator-(complex);
};

void complex ::operator+(complex c1)
{
    complex temp;
    temp.real = real + c1.real;
    temp.imaginary = imaginary + c1.imaginary;
    if (temp.imaginary >= 0)
    {
        cout << "\n Complex no after addition :: ";
        cout << temp.real << " + " << temp.imaginary << "i";
    }
    else
    {
        cout << "\n Complex no after addition :: ";
        cout << temp.imaginary << " + " << temp.real << "i";
    }
}

void complex ::operator-(complex c1)
{
    complex temp;
    temp.real = real - c1.real;
    temp.imaginary = imaginary - c1.imaginary;
    if (temp.imaginary >= 0)
    {
        cout << "\n Complex no after addition :: ";
        cout << temp.real << " + " << temp.imaginary << "i";
    }
    else
    {
        cout << "\n Complex no after addition :: ";
        cout << temp.imaginary << " + " << temp.real << "i";
    }
}

int main()
{
    complex c1, c2;
    int n;
    do
    {
        cout << "\n 1. Input data for complex no. ";
        cout << "\n 2. Addition of complex no. ";
        cout << "\n 3. Subtraction of complex no.";
        cout << "\n 4. Quit ";
        cout << "Enter your choice : ";
        cin >> n;
        switch (n)
        {
        case 1:
            c1.get_input();
            break;
        case 2:
            c1 + c2;
            break;
        case 3:
            c1 - c2;
            break;
        case 4:
            exit(1);
            break;
        }
    } while (n != 4);
    return 0;
}