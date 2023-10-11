#include<iostream>
using namespace std;

class de
{
    public:
    int a,b,c;
    friend istream & operator >> (istream & os,de & obj);
    friend ostream & operator >> (ostream & os,de & obj);
};
ostream & operator << (ostream & os ,de & obj)
{
    os << obj.a << obj.b << obj.c << endl;
    return os;
}

istream & operator >> (istream & os ,de & obj)
{
    os >> obj.a >> obj.b >> obj.c ;
    return os;
}

int main()
{
    de w,e;
    cin >> w;
    cout << w;
    cin.get();
}
