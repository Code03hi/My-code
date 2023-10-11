#include<iostream>
#include<string.h>
using namespace std;

class addstring
{
    public:
    char s1[25],s2[25];
    addstring(char s1[],char s2[])
    {
        strcpy(this->s1,s1);
        strcpy(this->s2,s2);
    }
    void operator + ()
    {
        cout << "Concatenation : " << strcat(s1,s2) << endl;
    }
};

int main()
{
    char str1[] = "Microsoft ";
    char str2[] = "Corporation";
    addstring a(str1,str2);
    +a;
    return 0;
}