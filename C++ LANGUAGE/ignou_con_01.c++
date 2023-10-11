#include<iostream>
using namespace std;
class integer
{
    private :
    int i;
    public:
    void getdata()
    {
        cout << " Enter any integer : ";
        cin >> i;
    }
    void setdata(int j)
    {
        i=j;
    }
    integer()
    {
       
    }
    integer(int j)
    {
        i=j;
    }
    void displaydata()
    {
        cout << endl << "Value of i = " << i;
    }
};

int main()
{
    integer i1,i2,i3;
    i1=integer(100);
    i1.displaydata();
    i2.setdata(200);
    i3.getdata();
    i3.displaydata();
    return 0;
}
