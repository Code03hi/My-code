#include<iostream>
using namespace std;

template <class T1,class T2>

class myClass
{
    public:
    T1 roll_no;
    T2 name;
    myClass(T1 roll_no,T2 name)
    {
        this->roll_no = roll_no;
        this->name = name;
    }
    void showdata()
    {
        cout << "Roll No : " << roll_no << endl;
        cout << "Name : " << name << endl ;
    }
};

int main()
{
    myClass <int ,char>m1(3,'B');
    m1.showdata();
    return 0;
}