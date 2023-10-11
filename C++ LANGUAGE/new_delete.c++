#include <iostream>
using namespace std;

int main()
{
    /* Basic Example */
    int a = 4;
    int *ptr = &a;
    *ptr = 999;
    cout << "The Value of a is : " << *(ptr) << endl; // deference operator

    // New Keyword and Operato
    int * p = new int(40); // dynamicly create interger or ush integer ki value 40 kar diya
    //float * p = new float(40);
    cout << "The Value at address p is : " << *(p) << endl;

    int * arr = new int[3]; // here integer array is created
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    //delete arr;
    cout << "The value of arr[0] is : " << arr[0] <<  endl ;
    cout << "The value of arr[1] is : " << arr[1] <<  endl ;
    cout << "The value of arr[2] is : " << arr[2] <<  endl ;

    // Delete operator and Keyword

    return 0;
}