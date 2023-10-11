#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        v.push_back(vector<int> ());
        for (int j = 0; i < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }
    return 0;
}