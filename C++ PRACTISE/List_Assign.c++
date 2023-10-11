#include<iostream>
#include<list>

using namespace std;

int main()
{
    list <int> first;
    list <int> second;
    first.assign(7,100);  // 7 ints with value 100
    second.assign(first.begin(),first.end());
    int myints[] = {1776,7,4};
    first.assign(myints,myints+3);
    cout << "Size of First : " << int(first.size()) << endl;
    cout << "Size of second : " << int(second.size()) << endl;
    return 0;
}