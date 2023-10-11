#include<iostream>
using namespace std;

class Complex
{
    private:
    float real;
    float imag;
    public:
    Complex() : real(0),imag(0){}
    void input()
    {
        cout << "Enter real and Imaginary parts respectively : ";
        cin >> real >> imag ;
    }
    Complex operator + (const Complex & obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void output()
    {
        if (imag<0)
        {
            cout << "Output Complex Number : " << real << imag << endl;
        }
        else
        cout << "Output Complex Number : " << real << "+" << imag << "i" << endl;
    }
};

int main()
{
    Complex Complex1,Complex2,result;
    cout << "Enter First Complex Number : " << endl;
    Complex1.input();
    cout << "Enter Second Complex Number : " << endl;
    Complex2.input();
    result = Complex1 + Complex2;
    result.output();
    return 0;
}