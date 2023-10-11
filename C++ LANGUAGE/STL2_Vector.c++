#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(4);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(5);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(6);
    cout << "Capacity -> " << v.capacity() << endl;
       v.push_back(6);
    cout << "Capacity -> " << v.capacity() << endl;
    cout << "Size Before Clear-> " << v.size() << endl;
    v.clear();
    cout << "Clear -> " ;
    cout << "Size After Clear-> " << v.size() << endl;
    cout << "Capacity -> " << v.capacity() << endl;
}
