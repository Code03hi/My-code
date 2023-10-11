#include<iostream>
#include<list>

using namespace std;

int main()
{
    list <int> myList;
    list <int> :: iterator it;
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    cout << "Mylist Contains : " ;
    for (list <int> :: iterator i = myList.begin(); i != myList.end(); i++)
    {
        cout << ' ' << *i;
    }
    cout << endl;
    myList.clear();
    myList.push_back(100);
    myList.push_back(200);
    cout << "After Clear " << endl;
    cout << "Mylist Contains : " ;
    for (list <int> :: iterator i = myList.begin(); i != myList.end(); i++)
    {
        cout << ' ' << *i;
    }
    return 0;
}