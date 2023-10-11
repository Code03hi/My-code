#include<iostream>
#include<array>

using namespace std;

int main()
{
    array <int,5> myarray = {2,16,77,34,50};
    cout << "Myarray Contain : ";
    for (auto it = myarray.begin(); it < myarray.end(); ++it)
    {
        cout << ' ' << *it;
    }
    cout << endl;
    return 0;
}