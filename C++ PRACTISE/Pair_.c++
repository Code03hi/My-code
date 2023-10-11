#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    pair <int,int>  p;
    p = make_pair(2,6);
    p = {8,9};
    cin >> p.first ;
    cout << p.first << " " << p.second << endl;
    int a[] = {1,2,3};
    int b[] = {3,4,5};
    pair <int,int> p1[3];
    p1[0] = make_pair(1,3);
    p1[1] = make_pair(2,4);
    p1[2] = make_pair(3,5);

    for (int i = 0; i < 3; i++)
    {
        cout << p1[i].first << " " << p1[i].second << endl;
    }

    return 0;
}