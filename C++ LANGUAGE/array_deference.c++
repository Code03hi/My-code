#include<iostream>
using namespace std;
int main()
{
    const int Array_len = 5;
    int MyNumber[Array_len] = {25,36,21,-29,89};
    int * pNumber = MyNumber;
    cout << "Displaying array Address \n";
    for (int index = 0; index < Array_len; index++)
    {
        cout << "Address " << index << " = " << (MyNumber+index) << endl;
    }
    cout << "Displaying array using pointer syntax operator * " << endl;
    for (int index = 0; index < Array_len; index++)
    {
        cout << "Element " << index << " = " << *(MyNumber+index) << endl;
    }
    cout << "Displaying array using pointer with array syntax , operator[] " << endl;
    for (int index = 0; index < Array_len; index++)
    {
        cout << "Element " << index << " = " << pNumber[index] << endl;
    }
    return 0;
}