#include<bits/stdc++.h>
using namespace std;

template<class A,class B>
auto findMin(A a,B b) -> decltype(a<b? a : b)
{
    return (a<b) ? a : b; 
}

int main()
{
    cout << findMin(4,3.44) << endl;
    cout << findMin(5.44,3) << endl;
    return 0;
}