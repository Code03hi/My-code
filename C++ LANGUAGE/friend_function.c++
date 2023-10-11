#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    void setNumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }

    // below line means that non member sumcomplex function allowed to do anything with my private member
    friend complex sumComplex(complex o1,complex o2);
    void printNumber(void)
    {
        cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex sumComplex(complex o1,complex o2)
    {
        complex o3;
        o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
        return o3;
    }
int main(){
    complex c1,c2,sum;
    c1.setNumber(1,4);
    c1.printNumber();
    c2.setNumber(5,3);
    c2.printNumber();
    sum=sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}

// Properties of friend function 
// 1. not is the scope of class .
// 2. since it is not in the scope of the class , it cannot be called from the object of that class . c1=sumComplex()==invalid 
// 3. can be invoked without the help of my object .
// 4. usually contains the objects as argument  .
// 5. can be declared inside public or private of the class .
// 6. it cannot access the member diretly by their names and need object_name.member_name to access any member .