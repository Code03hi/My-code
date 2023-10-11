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
    ///vector<pair<int,int>> :: iterator it;
    for(auto it=v_p.begin();it!=v_p.end();++it)   // auto keyword which determine automatically which data type is use here 
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    for(auto &value : v_p)   // range loop use here
    {
        cout << value.first << " " << value.second << endl;
    }
    /*
    for (int i : v_p)
    {
        cout << i << endl;
    } */
    
    return 0;
}