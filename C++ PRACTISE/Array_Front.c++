#include<iostream>
#include<array>

using namespace std;

int main()
{
    array <int,5> myarray = {5,8,9,6,1}; 
    cout << "Front : " << myarray.front() << endl;
    cout << "Back is : " << myarray.back() << endl;
    myarray.front() = 100;
    cout << "Myarray Now Contains : " ;
    for (int & i : myarray)
    {
        cout << ' ' << i;
    }
    cout << endl;
    return 0;
}