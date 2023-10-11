#include <bits/stdc++.h>
using namespace std;

int func1()
{
    return 10;
}

string func2()
{
    return "Bhagwan Jha";
}

int main()
{
    decltype(func1()) x;
    decltype(func2()) y;
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
}