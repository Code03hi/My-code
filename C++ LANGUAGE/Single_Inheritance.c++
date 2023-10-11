#include<iostream>
#include<string.h>
using namespace std;

class emp
{
    protected:
    int id;
    string name;
    public:
    void set_data()
    {
       cout <<  "Enter the Employee ID : " ;
       cin >> id;
       cout << "Enter Employee Name : " ;
       cin >> name;
    }
};

class work : public emp
{
    private:
    string Department;
    public:
    void set_dep(void)
    {
        cout <<  "Enter the department Name : " ;
        cin >> Department;
    }
    void display()
    {
        cout << "Employee ID : " << id << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Department : " << Department <<  endl;
    }
};

int main(){
    work o1;
    o1.set_data();
    o1.set_dep();
    o1.display();
    return 0;
}