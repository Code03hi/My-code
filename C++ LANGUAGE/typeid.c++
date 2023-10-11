#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 2 ;
    decltype(x) j = x + 2.5;
    cout << sizeof(x) << endl;
    cout << sizeof(j) << endl;
    cout << typeid(j).name() << endl;
    return 0;
}   