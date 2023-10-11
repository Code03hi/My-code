#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <string> s;
    cout << "Before Initilizing : " << s.empty() << endl;
    s.push("I");
    s.push("LOVE");
    s.push("YOU");
    cout << "After Initilizing : " << s.empty() << endl;
    //cout << s.capacity() << endl;
    cout << s.top() << endl;
    cout << s.size() << endl;
    //cout << s.last() << " ";
    /*
    for(int i=0;i<s.size();i++)
    {
        cout << s.front() << " ";
    } */
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
    return 0;
}