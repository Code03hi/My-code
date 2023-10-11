#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    map<string, int> ma;
    ma["B"] = 25;
    ma["H"] = 15;
    ma["A"] = 05;
    ma["G"] = 65;
    ma["W"] = 75;
    ma["A"] = 85;
    ma["N"] = 95;
    ma.erase("G");  // Log(n)
    ma.clear();
    for (auto it : ma)
    {
        cout << (it).first << " " << (it).second << endl;
    }
    auto ti = ma.find("G");  // o(log(n))
    if (ti == ma.end())
    {
        cout << "No Value Is Found " << endl;
    }
    else
        cout << "Value is Found : " << (*ti).first << " " << (*ti).second << endl;
}