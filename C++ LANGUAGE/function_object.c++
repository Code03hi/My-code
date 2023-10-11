#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    // function object(functor) : function wrapped in a class so that it available like an object
    int arr[] = {2, 5, 1, 3, 4};
    cout << "Before sorting " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    sort(arr, arr + 6,greater<int>());
    cout << "After sorting " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}