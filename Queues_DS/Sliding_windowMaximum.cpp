#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (auto &i : v)
        cin >> i;

    multiset<int, greater<int>> s;
    for (auto it = v.begin(); it < v.begin() + 3; it++)
    {
        s.insert(*it);
    }

    vector<int> ans;
    ans.push_back(*s.begin());

    for (auto it = v.begin() + 3; it < v.end(); it++)
    {
        s.erase(s.lower_bound(v[it - v.begin() - k]));
        s.insert(*it);
        ans.push_back(*s.begin());
        // for (auto i : s)
        //     cout << i << " ";
        // cout << " " << v[it - v.begin() - k];
        // cout << endl;
    }
    // s.erase(s.lower_bound(*v.begin()));
    // for (auto i : s)
    //     cout << i << " ";
    for (auto i : ans)
        cout << i << " ";
}