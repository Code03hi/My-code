#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,4> myarray = {4,26,80,14};
    cout << "Myarray Contains : " ;
    for (auto i = myarray.rbegin(); i < myarray.rend(); i++)
    {
        cout << ' ' << *i ;
    }
    return 0;
}