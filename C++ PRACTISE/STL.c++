#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    vector <int> a = {11,12,8,2};
    sort(a.begin(),a.end()); // O(NlogN)
    bool present = binary_search(a.begin(),a.end(),8);
    bool NotPresent = binary_search(a.begin(),a.end(),6);
    a.push_back(23);
    a.push_back(100);
    vector <int> :: iterator it = lower_bound(a.begin(),a.end(),100);
    vector <int> :: iterator it = upper_bound(a.begin(),a.end(),100);
}