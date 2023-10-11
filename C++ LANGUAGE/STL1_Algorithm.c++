#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout << "Finding -> " << binary_search(v.begin(),v.end(),5) << endl;
    cout << "Finding -> " <<binary_search(v.begin(),v.end(),8) << endl;
    cout << "Lower bound -> " << lower_bound(v.begin(),v.end(),5)-v.begin() << endl;
    cout << "Upper bound -> " << upper_bound(v.begin(),v.end(),5)-v.begin() << endl;
    int a=6;
    int b=8;
    cout << "Maximum -> " << max(a,b) << endl;
    cout << "Minimum -> " << min(a,b) << endl;
    swap(a,b);
    cout << "A -> " << a <<  endl;
    cout << "B -> " << b <<  endl;
    string st ="BHAGWAN";
    cout << "Before Reverse " <<  endl;
    cout << st << endl;
    reverse(st.begin(),st.end());
    cout << st << endl;
    cout << "Before Rotate " <<  endl;
    for(int i:v)
    {
        cout << i <<  endl;
    }
    rotate(v.begin(),v.begin()+1,v.end());
    cout << "After Rotate  " << endl;
    for(int i:v)
    {
        cout << i <<  endl;
    }
    cout << "Sort " <<  endl;
     v.push_back(11);
    v.push_back(10);
    v.push_back(9);
    v.push_back(4);
    v.push_back(8);
    sort(v.begin(),v.end());
     for(int i:v)
    {
        cout << i <<  endl;
    }
}