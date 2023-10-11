#include<iostream>
#include<array>

using namespace std;

int main()
{
    array <int,6> myarray = {60,50,40,30,20,10};
    for (auto i = myarray.crbegin(); i < myarray.crend(); i++)
    {
        cout << ' ' << *i;
    }
    return 0;
}