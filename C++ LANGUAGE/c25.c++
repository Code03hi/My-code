#include<iostream>
using namespace std;

class Employees
{
    static int salary;
    public:
    int id;
    void setid(void)
    {
        cout<<"Enter the ID of employee ";
        cin>>id;
    }
    void setSalary(void)
    {
        cout<<"Enter the Employee Salary ";
        cin>>salary;
    }
    void getid(void)
    {
        cout<<"The ID of this employee "<<id<<endl;
        cout<<"The salary of this employee "<<salary<<endl<<endl;
    }
};
int Employees :: salary;
int main()
{
    // Employees emp = emp.id(20);
    Employees Bhagwan[4],Sobha,Megha;
    for (int i = 0; i < 4; i++)
    {
        Bhagwan[i].setid();
        Bhagwan[i].setSalary();
        Bhagwan[i].getid();
    }
    //Sobha.setid();
    //Megha.setid();
    return 0;
}