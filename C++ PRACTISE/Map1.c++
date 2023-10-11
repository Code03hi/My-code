#include<bits/stdc++.h>

using namespace std;

int main()
{
    map <string ,int> ma;
    int n;
    cout << "Enter The Value of N : ";
    cin >> n; 
    for (int i = 0; i < n; i++)
    {
        string s;
        cout << "String : ";
        cin >> s;
        ma[s]++;
    }
    for(auto it : ma)
    {
        cout << it.first << " " << it.second << endl;
    }
}