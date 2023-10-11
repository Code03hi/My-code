#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> s ;
    s.insert(2);
    s.insert(5);
    s.insert(0);
     s.insert(5);
      s.insert(5);
         s.insert(7);
            s.insert(8);
    s.insert(2);
    s.insert(1);
        s.insert(1);
        set <int> :: iterator it = s.begin();
    for(auto i:s)
    {
        cout << "Set Element : " << i << endl;
    }
    s.erase(s.begin());
    cout << "After Erase  " <<  endl ;
        for(auto i:s)
    {
        cout << "Set Element : " << i << endl;
    }
    cout << "Count : " << s.count(2) <<  endl;
     cout << "Count : " << s.count(3) << endl;
     set <int> :: iterator itr = s.find(5);
     cout << "Value Present At : " << * it << endl;
     for(auto it=itr;it!=s.end();it++)
     {
         cout << "IT "  << *it << endl;
     }
   // s.find(s.begin(),s.end(),2);
}