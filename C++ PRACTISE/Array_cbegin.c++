#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,5> myarray = {2,16,77,34,50};
    cout << "Myarray Contains : " ;
    for (auto i = myarray.cbegin(); i < myarray.cend(); i++)
    {
        cout << ' ' << *i;
    }
    return 0;
}