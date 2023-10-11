#include<iostream>
using namespace std;

inline int add(int a,int b)
{
    return (a+b);
}

int main()
{
    int a=5,b=6;
    cout << "Sum : " << add(a,b) << endl;
    return 0;
}