#include<iostream>
#include<cstring>
using namespace std;

class student_type
{
    public:
    char * name;
    int length;
    int type;
    int res_type;
    string status;
    int total;
    student_type()
    {
        length=20;
        name = new char[length+1];
        total=0;
    }
    ~student_type()
    {
        delete name;
    }
        void accept();
        void display();
        void fee();
};
void student_type :: fee()
{
    if(res_type == 1)
    {
        total = 5000+ 5000+ 2000;
    }
    else
    {
        total =5000;
    }
}
void student_type :: display()
{
    cout << "Student Name : " << name << endl;
    if(res_type == 1)
    {
        status = "Resident";
    }
    else
    {
        status = "Non Resident";
    }
    cout << "Student Resident : " << status << endl;
    cout << "Student Fees : " << total << endl;
}
void student_type :: accept()
{
    cout << "Enter you name : ";
    cin.getline(name,15);
    cout.flush();
    cout << "Choose The Residential type " << endl;
    cout << "1 Residential include Room Rent + Food Cost + Tution fee => 12000 " << endl;
    cout << "1 Non Residential include Tution fee => 5000 " << endl;
    cout << "1 Press for residential " << endl;
    cout << "2 Press for Non Residential " << endl;
    cout  << "Enter Student Type : " ;
    cin >> res_type;
    fee();
}
int main()
{
    student_type ob;
    ob.accept();
    ob.display();
    return 0;
}
