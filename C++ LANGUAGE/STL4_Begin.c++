#include<iostream>  
#include<array>  
using namespace std;  
int main()  
{  
    array <int,6> myarray={1,2,3,4,5,6};  
    for (int * i=myarray.begin();i<myarray.end();i++)  
    {  
        cout<<* myarray;  
    }  
    return 0;  
}  