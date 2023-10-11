#include <bits/stdc++.h>
#include <tuple>

using namespace std;

int main()
{
    typedef tuple<int, char, float> tp;
    tp t1(1, 'J', 1.3);
    tp t2(2, 'A', 2.3);
    tp t3(3, 'H', 3.3);
    tp t4 = make_tuple(4,'B',4.3); 
    cout << tuple_size<tp> :: value << endl;
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<2>(t1) << endl;
    return 0;
}