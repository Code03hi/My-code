#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
    queue <int> qu;
    qu.push(5);
    qu.push(7);
    qu.push(8);
    qu.push(9);
    qu.push(3);
    while (!qu.empty())
    {
        cout << qu.front() << endl;
        qu.pop();
    }
    
}