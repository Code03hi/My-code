#include<iostream>
using namespace std;
int main()
{
    int MyNumbers[5];
    int * pNumber=MyNumbers;
    cout << "pNumber = " << pNumber << endl; // here the address of first array element is stored
    cout << "&Mynumber[0] = " << &MyNumbers[0] <<endl; // here we also use &MyNumber; 
    return 0;
}