#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque <int> d;
    d.push_back(25);
    d.push_front(2);
    d.push_front(4);
    d.begin();
    /*d.pop_back();
    d.pop_front();*/
    for(int i=0;i<d.size();i++)
    {
        cout << "Element " << d[i] << endl;
    }
    cout << "First Element : " << d.front() << endl;
    cout << "Last Element : " << d.back() << endl;
    // if empty then return 1 otherwise 0
    cout << "Empty or Not : " << d.empty() << endl;
    // Erase
    cout << "Before Erase : " << d.size() << endl;
    d.erase(d.begin(),d.begin()+1);
    cout << "After Erase : " << d.size() << endl;
        for(int i=0;i<d.size();i++)
    {
        cout << "Element " << d[i] << endl;
    }
    return 0;
}