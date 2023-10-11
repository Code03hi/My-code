#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector< pair<int,int> > v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // v.size() -> o(1)
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main()
{
    vector < pair<int,int> > v ; //= {{2,3},{5,6},{8,9}};
    printVec(v);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    
    printVec(v);
    return 0;
}