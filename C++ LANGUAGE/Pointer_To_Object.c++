#include<iostream>
using namespace std;

class complex
{
    int real,imaginary;
    public:
    void get_data()
    {
        cout << "The Real Part Is : " << real << endl;
        cout << "The Imaginary Part Is : " << imaginary << endl;
    }
    void Set_Data(int a,int b)
    {
        real=a;
        imaginary=b;
    }
};

int main(){
    /*complex c1;
    complex * ptr = &c1; */
    complex * ptr = new complex;
    // (*ptr).Set_Data(1,54); is exactly same as 
    ptr->Set_Data(1,54);
    // (*ptr).get_data(); is as good as
    ptr->get_data();

    // array of Objects
    complex * ptr1 = new complex[4];
    ptr1->Set_Data(1,4);
    ptr1->get_data();
    return 0;
}