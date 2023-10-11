#include<iostream>
using namespace std;

int main()
{
    cout.width(50); // setting width to 50 character
    cout<<"hello world!"<<endl<<" No of width is "<<cout.width()<<endl;
    cout.width(40);
    cout<<"Hello again!"<<endl<<" No of width is "<<cout.width()<<endl;
    return 0;
}