#include<iostream>
#include<cstring>
#include<array>

using namespace std;

int main()
{
    const char * cstr = "Test String " ;
    array <int,12> Charray ;
    memcpy(Charray.data(),cstr,12);
    cout << Charray.data() << endl;
    return 0;
}