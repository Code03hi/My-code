#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<string> st;
    st.insert("Bhagwan Jha");
    st.insert("Megha Kumari");
    st.insert("Bhagwan jha");
    st.insert("Nikki");
    st.insert("Bhagwan jha");
    auto it = st.find("Bhagwan Jha");
    if(it != st.end())
    {
        st.erase(it);
    }
    for (auto i = st.begin(); i != st.end(); i++)
    {
        cout << *i << endl;
    }
    st.erase("Bhagwan Jha");
    return 0;
}