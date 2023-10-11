#include<bits/stdc++.h>
using namespace std;

void print(set<string> st)
{
    for (auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it << endl;
    }
    
}

int main()
{
    set < string> st;
    st.insert("Bhagwan Jha");
    st.insert("Drishti Sharma");  // log(n)
    st.insert("Megha Kumari");
    st.insert("ahhs");
    st.insert("Nikki");
    auto it = st.find("Nikki");
    if(it!=st.end())
    {
        cout << st.erase("Nikki") << endl;
    }
    print(st);
}