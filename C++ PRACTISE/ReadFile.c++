#include<iostream>
#include<fstream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    ifstream in("sample.txt");
    getline(in,name);
    cout << name << endl;
}