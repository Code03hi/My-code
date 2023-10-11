#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x,int y) // this is a paratermized constructor as
    {
        a = x;
        b = y;
    }
    void printData(void)
    {
        cout << a << " + " << b << "i" << endl;
    }
};
int main()
{
    // implicit call
    complex c1(4,6);
    c1.printData();
    // Explicit call
    complex c2=complex(5,7);
    c2.printData();
    return 0;
}