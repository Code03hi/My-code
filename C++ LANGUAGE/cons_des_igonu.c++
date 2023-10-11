#include<iostream>
using namespace std;
class example
{
    private :
    int data;
    public:
    example()
    {
        cout << endl << "Inside the constructor" ;
    }
    ~example()
    {
        cout << endl << " inside the destructor" ;
    }
};

int main()
{
    example e;
}