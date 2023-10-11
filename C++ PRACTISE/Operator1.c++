#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX 100

class FloatArr
{
private:
    float v[MAX];

public:
    float &operator[](int i);
    static int MaxIndex() { return MAX - 1; }
};

float &FloatArr ::operator[](int i)
{
    if (i < 0 || i >= MAX)
    {
        cerr << "FloatArr : Outside of range !" << endl;
        exit(1);
    }
    return v[i];
}

int main()
{
    cout << "An Array with range checking !" << endl;
    FloatArr random;
    int i;
    for (i = 0; i <= FloatArr::MaxIndex(); i++)
        random[i] = (rand() - RAND_MAX / 2) / 100.0f;
    cout << "Enter indices between 0 and 1" << FloatArr ::MaxIndex() << "!" << endl
         << "(Quit by Entering invalid input)" << endl;
    while (cout << "\n Index : " && cin >> i)
        cout << i << ". Element :" << random[i];
    return 0;
}