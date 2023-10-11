#include<iostream>
using namespace std;

class complex
{
    private :
    int real,imaginary;
    complex()
    {
       
    }
    public:
    complex(int r ,int i)
    {
        real =r;
        imaginary=i;
    }
    complex operator + (complex const & obj)
    {
        complex res;
        res.imaginary = imaginary + obj.imaginary;
        res.real = real + obj.real;
        return res;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" <<endl;
    }
};

int main()
{
    complex c1(12,7),c2(6,7);
    complex c3 = c1 + c2; // here c3 is return type means complex with the use of c1 object calling the function + and passing the argument c2 object ;
    c3.display();
    return 0;
}