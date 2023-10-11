#include<iostream>
#include<list>

using namespace std;

int main()
{
    list <int> myList;
    myList.push_back(10);
    while (myList.back()!=0)
    {
        myList.push_back(myList.back()-1);
    }
    cout << "Mylist Contains : " ;
    for (list <int> :: iterator i = myList.begin(); i != myList.end(); i++)
    {
        cout << ' ' << *i;
    }
    cout << '\n';
}