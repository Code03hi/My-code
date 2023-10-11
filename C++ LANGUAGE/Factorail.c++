#include <iostream>
using namespace std;

class fact
{
public:
    int fac, n1, n, f = 1;
    void input();
    int Cal();
    void Display();
};

void fact ::input()
{
    cout << "Enter Number : ";
    cin >> n1;
}

int fact ::Cal()
{
    n = n1;
    if (n1 == 0)
    {
        fac = 1;
    }
    else
    {
        {
            while (n > 0)
            {
                f = f * n;
                n--;
            }
        }
    }
}

void fact ::Display()
{
    cout << "Factorial of " << n1 << " : " << f;
}

int main()
{
    fact f1;
    f1.input();
    int f = f1.Cal();
    f1.Display();
    return 0;
}