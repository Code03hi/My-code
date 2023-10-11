#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter : ";
    cin >> n;
    int a[n];
    cout << "Enter Value" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int *ptr = lower_bound(a,a+n,2);
    if(ptr==(a+n))
    {
        cout << "Not Found " << endl;
    }
    return 0;
}