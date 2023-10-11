#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    //list<int> n(l); //  here copy of element of l into n
    list<int> n(5,7);  // initilized 5 with 7 element in all place
    l.push_back(2);
    l.push_back(4);
    l.push_front(6);
    for (int i : l) // i belong to l then i access the element
    {
        cout << "Element : " << i << endl;
    }
    cout << "Front : " << l.front() << endl;
    cout << "Last : " << l.back() << endl;
    cout << "Front : " << n.front() << endl;
    cout << "Last : " << n.back() << endl;
    l.erase(l.begin());
    cout << "After Erase" << endl;
    for (int i : l) // i belong to l then i access the element
    {
        cout << "Element : " << i << endl;
    }
    cout << "The size of list : " << l.size() << endl;
    return 0;
}