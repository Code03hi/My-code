#include<iostream>
using namespace std;

class A
{
   int a;
   public:
   A & getData(int a)
   {
       this->a=a;
       return *this;
   }
   void ShowData(void)
   {
     cout << "The value of A : " << a << endl ;
   }
};

int main(){
    // This is a keyword which is a pointed which points to the object which is being invoked the member function

    A o1;
    o1.getData(6).ShowData();
    o1.ShowData();   
    return 0;
}