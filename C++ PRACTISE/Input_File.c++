#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

class me
{
    int rollNo;
    string name;

public:
    void getData(int rno, string n)
    {
        rollNo = rno;
        name = n;
    }
    void display()
    {
        cout << "Roll No " << rollNo << endl;
        cout << "Name = " << name << endl;
    }
};

int main()
{
    ofstream offile("me.txt");
    me obj;
    obj.getData(03, "Bhagwan Jha");
    offile.write((char *)&obj, sizeof(obj));
    offile.close();
    ifstream ifile;
    ifile.open("me.txt", ios::out);
    ifile.read((char *)&obj, sizeof(obj));
    obj.display();
    return 0;
}