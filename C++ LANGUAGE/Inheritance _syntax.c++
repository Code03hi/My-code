#include <iostream>
using namespace std;

// Base class
class Employee
{
    int salary;
public:
 int id;
    Employee()
    {

    }
    Employee(int Imp_id,int salary)
    {
        id = Imp_id;
        this->salary = salary;
    }
    void show(void)
    {
        cout << "The Employee ID : " << id << endl;
        cout << "The Employee Salary : " << salary << endl;
    }
};

/*  Drived Class Syntax
class {{Drived-class-name}} : {{Visibility-mode}} {{base-class-name}}
{
    class member/method/etc;
} */
// creating a Programmer class drived from Employee Base class

// Default visibility mode is private
// Public visibilty mode : public member of a base class become Public member of the drived class 
// Private visibilty mode : public member of a base class become Private member of the drived class 
// Private members are never inherited
class Programmer : public Employee
{
    public:
    int LanguageCode=9;
    Programmer(int id)
    {
        Employee ::id =id;
    }
};

int main()
{
    Employee Bhagwan,Monalish;
    Bhagwan = Employee(03, 85000);
    Monalish = Employee(04, 30000);
    Bhagwan.show();
    Monalish.show();
    Programmer Skill(1);
    return 0;
}