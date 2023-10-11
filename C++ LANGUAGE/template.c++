#include <iostream>
using namespace std;

template <class T>

class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T DotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector <float>v1(3);
    v1.arr[0] = 2.3;
    v1.arr[1] = 3.2;
    v1.arr[2] = 4.8;
    vector <float>v2(3);
    v2.arr[0] = 6.6;
    v2.arr[1] = 4.4;
    v2.arr[2] = 2.1;
    float result = v1.DotProduct(v2);
    cout << "Sum : " << result << endl;
    return 0;
}