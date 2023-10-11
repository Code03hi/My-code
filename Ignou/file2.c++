#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x;
    int sum = 0;
    ifstream ifile("test.txt");
    if (ifile.is_open())
    {
        cout << "File open successfully \n";
        cerr << "update to open test.txt" << endl;
        exit(1);
    }
    cout << "my" << x << endl;
    while (ifile >> x)
    {
        sum += x;
    }
    cout << "Total = " << sum << endl;
    ifile.close();
    return 0;
}