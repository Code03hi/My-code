#include <iostream>
#include<osjjsjhd>
#include <vector>
using namespace std;

template<class t>

void display(vector<t> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Element : " << v[i] << endl;
    }
}

int main()
{
    vector<int> vec1;  // zero length integer vector
    vector<char> vec2(4);  // 4-element character vector 
    vector<char> vec3(vec2); // 4-elemnt character vector from vec2
    vector<int> vec4(6, 3);  // 6-element vector of 3s
    //vec2.insert('5');
    int element;
    /*for (int i = 0; i < 4; i++)
    {
        cout << "Enter an element to add this vector : ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    vector<int>::iterator it = vec1.begin();
    vec1.insert(it,3, 36);*/
    display(vec4);
    return 0;
}