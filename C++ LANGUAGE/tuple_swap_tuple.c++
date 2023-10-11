#include <bits/stdc++.h>
// #include<string>
#include <tuple>
using namespace std;

int main()
{
    typedef tuple<int, string> tp;
    tp t1 = make_tuple(3, "Bhagwan Jha");
    tp t2 = make_tuple(4, "Nora Fatehi");
    int a;
    string name;
    cout << "Before Swapping " << endl;
    tie(a, name) = t1;
    cout << "Roll No : " << a << " And "
         << " Name : " << name << endl;
    tie(a, name) = t2;
    cout << "Roll No : " << a << " And "
         << " Name : " << name << endl;
    t1.swap(t2);
    cout << "After Swapping " << endl;
    tie(a, name) = t1;
    cout << "Roll No : " << a << " And "
         << " Name : " << name << endl;
    tie(a, name) = t2;
    cout << "Roll No : " << a << " And "
         << " Name : " << name << endl;
}
