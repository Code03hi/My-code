#include<iostream>
#include<sstream>
#include<string>
using namespace std;
class Date
{
    private:
    int Day;
    int Month;
    int Year;
    string DateInString;
    public:
    Date()
    {

    }
    Date(int InputDay,int InputMonth,int InputYear) : Day(InputDay) , Month (InputMonth) , Year(InputYear)
    {

    }
    operator const char * ()
    {
        ostringstream formattedDate;
        formattedDate << Day << "/" << Month << "/" << Year << endl; 
        DateInString = formattedDate.str();
        cout << DateInString << endl;
        return DateInString.c_str();
    }
};
int main()
{
    Date holiday;
    holiday = Date(26,12,2022);
    cout << "Holiday is on : " << holiday ;
    return 0;
}