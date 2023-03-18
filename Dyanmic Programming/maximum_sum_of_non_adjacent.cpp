#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print_all(vector<ll> &arr, ll indx, vector<ll> &sub)
{
    if (indx == arr.size())
    {
        for (auto &i : sub)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    // selecting
    sub.push_back(arr[indx]);

    print_all(arr, indx + 1, sub);

    // not selecting
    sub.pop_back();
    print_all(arr, indx + 1, sub);
}

ll recursive(vector<ll> &arr, ll indx, vector<ll> &dp)
{
    if (indx == 0)
        return arr[indx];
    if (indx < 0)
        return 0;
    if (dp[indx] != -1)
        return dp[indx];
    ll pick, nopick;
    pick = arr[indx] + recursive(arr, indx - 2, dp);
    nopick = recursive(arr, indx - 1, dp);
    // memoization
    ll res = dp[indx] = max(pick, nopick);
    return res;
}

ll table(vector<ll> &arr)
{
    vector<int> dp(100005, -1);
    dp[0] = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        ll pick, nopick;
        if (i == 1)
            pick = arr[i];
        else
            pick = arr[i] + dp[i - 2];

        nopick = dp[i - 1];
        dp[i] = max(pick, nopick);
    }
    return dp[arr.size() - 1];
}
ll space(vector<int> &arr)
{
    int val1 = arr[0];
    int val2 = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ll pick, nopick;
        if (i == 1)
            pick = arr[i];
        else
            pick = arr[i] + val2;

        nopick = val1;

        ll curr = max(pick, nopick);
        val2 = val1;
        val1 = curr;
    }
    return val1;
}
void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (auto &i : arr)
        cin >> i;
    vector<ll> sub;

    // print_all(arr, 0, sub);

    vector<ll> dp(100005, -1);
    // cout << table(arr) << endl;
    cout << recursive(arr, n - 1, dp) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);

#endif
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}