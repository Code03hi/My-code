#include <iostream>  
using namespace std;  
template<class X> void fun(X a)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
}  
template<class X,class Y> 
void fun(X b ,Y c)  
{  
    std::cout << "Value of b is : " <<b<< std::endl;  
    std::cout << "Value of c is : " <<c<< std::endl;  
}  
/*
void fun(X b ,X c)  
{  
    std::cout << "Value of b is : " <<b<< std::endl;  
    std::cout << "Value of c is : " <<c<< std::endl;  
}
*/

int main()  
{  
   fun(10);  
   fun(20,30.5); 
   //fun(30,4);  
   return 0;  
}  