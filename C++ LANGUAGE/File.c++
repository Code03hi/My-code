#include<iostream>
#include<fstream>
using namespace std;
/*
the useful class for working with file in c++ are :
1. fstreambase
2. ifstream -> derived from fstreambase  
3. ofstream -> derived from fstreambase
 
in order work with in c++ , you will have to open it . Primarily , there are 2 ways to open a file :
1. using the constructor
2. using the member function open() of the class  
*/

int main(){
    string st = "My name name is bhagwan ";
    string st2;
    // Writing Operation
    // opening files using constructor and writing it ye jo hai file ko output dega
    ofstream out("sample.txt");  //  write operation
    out << st; // write to a file
    
    // Reading Operation
    // opening files using constructor and reading it ye file se input lega
    ifstream in("sample1.txt");  //  read operation  
    //in >> st2; Same as cin operation
    getline(in,st2);  // just like Same as cin operation
    cout << st2;
    return 0;
}