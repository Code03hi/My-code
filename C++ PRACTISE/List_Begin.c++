#include<iostream>
#include<list>

using namespace std;

int main()
{
    int MyInt[] = {73,25,86,96,36};
    list <int> mylist (MyInt,MyInt+5);
    cout << "Mylist Contains : ";
    for (list <int> :: iterator i = mylist.begin(); i != mylist.end(); i++)
    {
        cout << ' ' << *i;
    }
    cout << endl;
}