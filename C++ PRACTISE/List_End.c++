#include<iostream>
#include<list>

using namespace std;

int main()
{
    int Myints[] = {75,23,65,42,13};
    list <int> mylist (Myints,Myints+5);
    cout << "Mylist Contains : ";
    for (list <int> :: iterator i = mylist.begin() ; i != mylist.end(); i++)
    {
        cout << ' ' << *i;
    }
    cout << endl;
}