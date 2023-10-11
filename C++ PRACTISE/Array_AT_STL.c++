#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> myarray;
    for (int i = 0; i < 10; i++)
        myarray.at(i) = i + 1;
    cout << "Myarray Contain :";
    for (int i = 0; i < 10; i++)
        cout << ' ' << myarray.at(i);
        cout << endl;
        return 0;
}