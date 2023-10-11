#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float, class t3 = char>
class bhagwan
{
public:
    t1 a;
    t2 b;
    t3 c;
    bhagwan(t1 a, t2 b, t3 c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void display()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "The value of c is : " << c << endl;
    }
};

int main()
{
    bhagwan <>b1(1,6.3,'a');
    b1.display();
    cout << endl;
    bhagwan <float,char,char> b2(2.3,'a','b');
    b2.display();
    return 0;
}