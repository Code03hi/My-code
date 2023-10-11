#include <bits/stdc++.h>
#include <iostream>
// #include<string>
#include <tuple>
using namespace std;

int main()
{
    tuple<int, string> t1(3, "Bhagwan Jha");
    tuple<int, string> t2(4, "Nora Fatehi");
    auto t3 = tuple_cat(t1, t2);
    cout << "The new tuple elements in order are " << endl;
    cout << get<1>(t3) << " Loves " << get<3>(t3) << endl;
}
