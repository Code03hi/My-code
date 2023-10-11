#include <iostream>
using namespace std;

// Destructor never take argument nor does it return any value

class num
{
public:
    static int count;
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object " << count<<endl;
    }
    ~num()
    {
        cout << "This is the time when destructor is called for object " << count<<endl;
        count--;  
    }
};
int num ::count = 0;
int main()
{
    cout<<"We are inside our main function "<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block" << endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}