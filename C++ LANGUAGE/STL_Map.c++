#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int,string> s;
    s[1]="I";  // here 1 is key and "I" is value
    s[2]="LOVE";
    s[13]="INDIA";
    s[20]="BHARAT";
    s.insert({5,"BHAGWAN"});
    cout << "Before Erase " << endl;
    for(auto i:s)
    {
        cout << i.first << " -> "<< i.second<< endl;
    }
     s.erase(13);
    cout << "After Erase " << endl;
    for(auto i:s)
    {
        cout << i.first << " -> "<< i.second<< endl;
    }
    cout << "Find 13 -> " << s.count(13) << endl;
    cout << "Find 13 -> " << s.count(-13) << endl;
    auto it = s.find(5);
    for(auto i=it;i!=s.end();i++)
    {
        cout << (*i).first << endl;
    }
    return 0;
}
