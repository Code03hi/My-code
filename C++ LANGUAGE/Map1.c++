#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,int> marks;
    marks["bhagwan"] = 98;
    marks["meg"] = 94;
    marks["sob"] = 30;
    marks.insert({{"sandeep ku",63},{"rahul",54}});
    //map <string,int> :: iterator iter ;// = marks.begin();
    for (auto iter = marks.begin(); iter!=marks.end() ; iter++)
    {
        cout << "Marks : " << (*iter).first << " " << (*iter).second << endl;
    } 
    cout << "The size of : " << marks.size() << endl;
    cout << "The maximum size of : " << marks.max_size() << endl;
    cout << "The empty's return of : " << marks.empty() << endl;
    return 0;
}