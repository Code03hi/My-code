#include <iostream>
#include <array>

using namespace std;

/* The max_size of an array object, just like its size, is always equal to the second 
template parameter used to instantiate the array template class. */

int main()
{
    array<int, 10> myints;
    cout << "Size of myints : " << myints.size() << endl;
    cout << "Max_Size of myints : " << myints.max_size() << endl;
    return 0;
}