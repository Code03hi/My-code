#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3,2,4,5};
    for(auto i : v)
    {
        cout << i << endl;
    }
    vector<pair<int,int>> v_p = {{2,3},{5,6},{8,9},{7,3}};
    vector<pair<int,int>> :: iterator it;
    for(it=v_p.begin();it!=v_p.end();++it)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    for(it=v_p.begin();it!=v_p.end();++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}