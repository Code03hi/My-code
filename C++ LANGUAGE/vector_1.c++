#include <iostream>
#include <vector>

using namespace std;

void printVec(vector<int> v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // v.size() -> o(1)
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(7);
    /*int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        printVec(v);
        v.push_back(x);
    }*/
    printVec(v);
    v.pop_back();
    printVec(v);
    vector <int> v2 = v;  // O(n)
    v2.push_back(8);
    printVec(v);
}