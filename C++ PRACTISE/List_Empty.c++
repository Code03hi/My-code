#include<iostream>
#include<list>

using namespace std;

int main()
{
    list <int> mylist;
    int sum(0);
    for (int i = 0; i <= 10; i++)
    {
        mylist.push_back(i);
    }
    while (!mylist.empty())
    {
        sum += mylist.front();
        mylist.pop_front();
    }
    cout << "Total : " << sum << endl;
}