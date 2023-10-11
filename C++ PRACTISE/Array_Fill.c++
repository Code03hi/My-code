#include<iostream>
#include<array>

using namespace std;

int main()
{
    array <int,5> myarray ;
    myarray.fill(6);
    cout << "Myarray Contains : ";
    for (int i : myarray)
    {
        cout << ' ' << i;
    }
    cout << endl;
}