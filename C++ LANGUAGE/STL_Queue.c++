#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue <string> q;
    q.push("I");
    q.push("LOVE");
    q.push("YOU");
    q.push("NORA");
    cout << "Size of Queue : " << q.size() << endl;
    q.pop() ;
    cout << "First : " << q.front() << endl;
    cout << "Last : " << q.back() << endl;
    cout << "Size of Queue : " << q.size() << endl;
    return 0;
}