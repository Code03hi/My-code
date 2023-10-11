#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    list < int> myList;
    list < int> :: iterator it1,it2;
    for (int i = 0; i < 10; i++)
    {
        myList.push_back(i*10);
    }
    it1 = it2 = myList.begin();
    advance(it2,6);
    ++it1;
    it1 = myList.erase(it1);
    it2 = myList.erase(it2);
    ++it1;
    --it2;
    myList.erase(it1,it2);
    cout << "Mylist Contains : " ;
    for (it1 =  myList.begin(); it1 != myList.end(); it1++)
    {
        cout << *it1 << " " ; 
    }
    cout << endl;
}