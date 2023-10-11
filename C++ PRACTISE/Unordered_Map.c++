#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> ma;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ma[s]++;
    }
    int q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << ma[s] << endl;
    }
}