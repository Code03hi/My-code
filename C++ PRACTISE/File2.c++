#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string name; 
    // Opening files using constructor and writing it
    ofstream out("sample.txt"); 
    // Write operation
    name = "Bhagwan Jha";
    out<<name;
}