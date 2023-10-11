#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    return a * b / __gcd(a, b);
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << lcm(lcm(a, b), c);
    return 0;
}