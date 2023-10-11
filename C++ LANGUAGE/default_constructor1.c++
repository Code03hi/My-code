#include<iostream>
using namespace std;

class point
{
    int a,b;
    public:
    point(int x,int y)
    {
        a=x;
        b=y;
    }
    void displayPoint(void)
    {
        cout<<"The point is ( "<<a<<", "<<b<<" ) "<<endl;
    }
};
// Create a function (Hint : Make it a friend function) which takes 2 point objects and computers the distance between those 2 points

int main(){
    point p(1,5);
    p.displayPoint();
    point q(6,8);
    q.displayPoint();
    return 0;
}