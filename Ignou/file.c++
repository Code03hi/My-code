#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;

class me
{
    int rollNo;
    string name;
    public:
    void getdata(int rno,string n)
    {
        rollNo=rno;
        name = n;
    }
    void display()
    {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    ofstream oflie("me.txt");
    me obj;
    obj.getdata(3,"Bhagwan");
    oflie.write((char * )&obj,sizeof(obj));
    oflie.close();
    ifstream ifile("me.txt");
    ifile.read((char *)&obj,sizeof(obj));
    obj.display();
    string get;
    getline(ifile,get);
    cout << get;
    return 0;
}