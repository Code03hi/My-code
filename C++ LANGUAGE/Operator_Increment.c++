#include<iostream>
using namespace std;
class date
{
    private :
    int Day;
    int Month;
    int Year;
    public:
    date(int InputDay,int InputMonth,int InputYear) : Day(InputDay) , Month(InputMonth) , Year(InputYear)
    {

    }
    date & operator ++ ()
    {
        ++Day;
        return * this;
    }
    date & operator -- ()
    {
        --Day;
        return * this;
    }
    void display()
    {
        cout << Day << "/" << Month << "/" << Year << endl;
    }
};
int main()
{
    date holiday(24,11,2022);
    cout << "The date object is initialized to : ";
    holiday.display();
    ++holiday;
    cout << "Date after prefix-increment is : " ;
    holiday.display();
    --holiday;
    --holiday;
    cout << "Date after two prefix-decrement is : ";
    holiday.display();
    return 0;
}