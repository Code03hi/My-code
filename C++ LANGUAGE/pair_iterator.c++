#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {2,3,4,6};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl ;
    }
    vector < pair<int,int> > v_p = {{2,3},{4,9},{9,6}};
    vector < pair<int,int> > :: iterator it;
    for (it = v_p.begin(); it != v_p.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl ;
    }
    
    return 0;
}