#include<iostream>
using namespace std;
/* syntax of mutiple inheritance 
class Derived:visiblity-mode base1,visibility-mode base2
{

}; */

class base1
{
    protected:
    int base1int;
    public:
    void set_base1int(int p)
    {
        base1int=p;
    }
};

class base2
{
    protected:
    int base2int;
    public:
    void set_base2int(int p)
    {
        base2int=p;
    }
};

class derived : public base1,public base2
{
    public:
    void show(void)
    {
        cout<<"The value of base1 is : "<<base1int<<endl;
        cout<<"The value of base1 is : "<<base2int<<endl;
        cout<<"The sum of these value is : "<< base1int+base2int<<endl;
    }
};
class base3 : public derived
{
    protected:
    int base3int;
    public:
    void set_base3int()
    {
        base3int=base1int+base2int;
    }
};

int main(){
    derived p1;
    p1.set_base1int(6);
    p1.set_base2int(7);
    p1.show();
    return 0;
}