#include<iostream>
#include<fstream>
using namespace std;


int main(){
    // connecting our file with give_Output stream
    ofstream give_Output("sample.txt");
    // Creating a name string and filling variable entered by the users 
    string name;
    cout << "Enter you name : " ;
    cin >> name;
    // Writing a string to the file
    give_Output << "My name is " +  name ;
    give_Output.close();

    ifstream read("sample.txt");
    string content;
    getline(read,content);
    cout << content;
    read.close();
    return 0;
}