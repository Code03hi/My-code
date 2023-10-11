#include<iostream>
#include<array>

using namespace std;

int main()
{
    array <int,5> myarray = {5,9,17,25,96};
    cout << "Front is : " << myarray.front() << endl;
    cout << "Back is : " << myarray.back() << endl;
    myarray.back()=50;
    cout << "Myarray now Contains : " ;
    for (int x : myarray)
    cout << ' ' << x;
    cout << endl;
}