#include <iostream>
using namespace std;

template <class t>
class bhagwan
{
public:
    t data;
    bhagwan(t a)
    {
        data = a;
    }
    void display();
};
template <class t>
void bhagwan<t> :: display()
{
    cout << "Data : " << data;
}

void func(int a)
{
    cout << "I am first func() " << a << endl ;
}

template<class t>
void func(t a)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    /*
    bhagwan<float> b(3.3);
    cout << b.data << endl;
    b.display();*/
   func(4); // Exact match takes the highest priority 
}