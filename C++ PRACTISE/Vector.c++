#include<bits/stdc++.h>

using namespace std;

void printVec(vector <int> v,int n)
{
    for (int i = 0; i <n; i++)
    {
        cout << v[i] << " " ;
    }
}

int main()
{
    vector <int> v;
    vector <int> v1(5);
    int x= v.size();
    int n;
    cout << "Enter Size : " ; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }
    printVec(v1,n);
}