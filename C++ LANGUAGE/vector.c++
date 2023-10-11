#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> * vp = new vector<int>; // Dyanmic vector
    vector <int> v ; // static vector
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
   
    v.pop_back();
    cout<<"The size of Vector : " << v.size()<<endl;
    cout<<"Capactity of Vector : " << v.capacity()<<endl;
   
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v.at(3) << endl ;
    cout << v.at(4) << endl ; // at is safer
    cout << v.at(5) << endl ;
    cout << v.at(6) << endl ;  
    return 0;
}