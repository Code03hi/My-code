#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<string> v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // v.size() -> o(1)
        cout << v[i] << endl;
    }
}

int main()
{
    vector<string> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    printVec(v);
}