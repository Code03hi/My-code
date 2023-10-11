#include <iostream>
using namespace std;

class complex
{
    int a,b;
    // creating a constructor .
    // constructor is a special member function with same name as of the class . 
    // It is automatically invoked whenever an object is created .
    // it is used to initilized the object of its class .
    public:
   
    void printData(void)
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }  
};
 complex :: complex(void)// constructor declaration ----> This is a default constructor as it takes no parameters
    {
        a=10;
        b=20;
    }
int main()
{
    complex c1;
    c1.printData();
    return 0;
}

// characteristics of constructor 

// 1. it should be declared in the public section of the class 
// 2. they are automattically invoked whenever the object is created
// 3. They cannot return values and do not have return types
// 4. It can have default argument .
// 5. We cannot refer to their address .