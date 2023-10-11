#include<iostream>
#include<array>

using namespace std;

int main()
{
    array <int,0> first;
    array <int,5> second;
    cout << "First " << (first.empty() ? "Is Empth " : "Is Not Empty ") << endl;
    cout << "Second " << (second.empty() ? "Is Empth " : "Is Not Empty ") << endl;
    return 0;
}