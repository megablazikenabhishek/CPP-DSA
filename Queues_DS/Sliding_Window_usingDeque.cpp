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

    deque<int> dq;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (!dq.empty() && dq.front() == i - k)
            dq.pop_front();

        while (!dq.empty() && v[dq.back()] <= v[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);

        if (i >= k - 1)
            ans.push_back(v[dq.front()]);
    }
    for (auto i : ans)
        cout << i << " ";
}