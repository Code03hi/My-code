#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display_base()
    {
        cout << "Displaying Base Class Variable var_base : " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_Derived = 2;
    void display_Derived()
    {
        cout << "Displaying Base Class Variable var_base : " << var_base << endl;
        cout << "Displaying Base Class Variable var_Derived : " << var_Derived << endl;
    }
};

int main()
{
    BaseClass *base;
    BaseClass obj_base;
    DerivedClass derived;

    base = &derived;
    base->display_base();
    return 0;
}