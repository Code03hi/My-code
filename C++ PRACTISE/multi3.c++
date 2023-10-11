#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        multiset<long long> bags;
        for (int i = 0; i < n; ++i)
        {
            long long Candy_ct;
            cin >> Candy_ct;
            bags.insert(Candy_ct);
        }
        long long total_Candies = 0;
        for (int i = 0; i < k; ++i)
        {
            auto last_it = (--bags.end());
            long long candy_ct = *last_it;
            total_Candies += candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct / 2);
        }
        cout << total_Candies << endl;
    }
    return 0;
}