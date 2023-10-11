#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display_base()
    {
        cout << "Displaying Base Class Variable var_base : " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_Derived;
    void display_Derived()
    {
        cout << "Displaying Base Class Variable var_base : " << var_base << endl;
        cout << "Displaying Base Class Variable var_Derived : " << var_Derived << endl;
    }
};

int main()
{
    BaseClass obj_base;
    DerivedClass obj_derived;
    BaseClass *base_Class_to_Pointer;
    base_Class_to_Pointer = &obj_derived; // Pointing Base class pointer to Derived class
    base_Class_to_Pointer->var_base = 35;
    base_Class_to_Pointer->display_base();
    // base_Class_to_Pointer->display_Derived();
    DerivedClass *Derived_Class_to_Pointer;
    Derived_Class_to_Pointer=&obj_derived;
    Derived_Class_to_Pointer->var_Derived = 36;
    Derived_Class_to_Pointer->display_Derived();
    return 0;
}