#include<iostream>
using namespace std;

class counter
{
    int c1=0,c2=0;
    public:
    counter()
    {}
    counter (int b1,int b2) : c1(b1) ,c2(b2)
    {}
    counter operator ++ ();
    void print()
    {
        cout << "c1 : " << c1 << endl;
        cout << "c2 : " << c2 << endl;
    }
};

counter counter :: operator++()
{
    c1++;
    c2++;
}

int main()
{
    counter k1;
    k1.print();
    ++k1;
    ++k1;
    k1.print();
    return 0;
}