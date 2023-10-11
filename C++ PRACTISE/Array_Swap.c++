#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 5> first = {10, 20, 30, 40, 50};
    array<int, 5> second = {11, 12, 13, 14, 15};
    cout << "Before Swap " << endl;
    cout << "First : ";
    for (int i : first)
    {
        cout << ' ' << i;
    }
    cout << endl;
    cout << "Second : ";
    for (int j : second)
    {
        cout << ' ' << j;
    }
    cout << endl;
    first.swap(second);
    cout << "After Swap " << endl;
    cout << "First : ";
    for (int i : first)
    {
        cout << ' ' << i;
    }
    cout << "\n";
    cout << "Second : ";
    for (int j : second)
    {
        cout << ' ' << j;
    }
}