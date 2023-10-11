#include<iostream>
using namespace std;
int main()
{
    int * pAge = new(nothrow) int [0x1fffffff];
    if(pAge)
    {
        delete[] pAge;
    }
    else
    {
        cout << "Memory allocation failed . Nothing Ending program " <<  endl ;
    }
    return 0;
}