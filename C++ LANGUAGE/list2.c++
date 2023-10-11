#include <iostream>
#include <list>
using namespace std;
template<class t>
void display(list<t> &l)
{
    list <int> :: iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }   
    cout << endl; 
    //cout << "First operation is complete Now " << endl;
}

int main()
{
    list<int> list1;    // list of 0 length
    list<int> list2(7); // empty list of size of 7
    list1.push_back(2);
    list1.push_back(9);
    list1.push_back(4);
    list1.push_back(5);
    list<int>::iterator it = list1.begin();
    it++;
    cout << *it << endl;
    display(list1);
    list1.sort();
    display(list1);
    list1.merge(list2);
    display(list1);
    list1.pop_back();
    display(list1);
    list1.pop_front();
    list1.remove(4);
    list1.push_front(4);
    display(list1);
    list <int > :: iterator iter;
    iter = list2.begin();
    *iter=45;
    iter++;
    *iter=55;
    iter++;
    *iter=65;
    iter++;
    display(list2);
    return 0;
}