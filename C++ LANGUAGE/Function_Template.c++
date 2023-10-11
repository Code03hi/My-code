#include<iostream>
using namespace std;

template<class t1,class t2>


int funcAverage(t1 a,t2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

template<class t>
void swapp(t &a,t &b)
{
    t temp = a;
    a = b;
    b = temp; 
}

int main()
{
    float a;
    a = funcAverage(5,2.3);
    printf("The Average of these number %.2f \n ",a);
    cout << "Average : " << a << endl;
    int x=2,y=3;
    swapp(x,y);
    cout << "The value of x : " << x << endl;
    cout << "The value of y : " << y << endl;
    return 0;
}