#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(vector<vector<int>> &arr, ll i, ll j, vector<vector<int>> &dp)
{
    if (i == 0 and j == 0)
        return arr[0][0];
    if (i < 0 or j < 0)
        return INT_MAX;
    if (dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = min(recur(arr, i - 1, j, dp), recur(arr, i, j - 1, dp)) + arr[i][j];
}
ll table(vector<vector<int>> &arr, ll n, ll m)
{
    vector<vector<int>> dp(n, vector<int>(m));

    dp[0][0] = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 and j == 0)
                continue;
            ll val1 = INT_MAX, val2 = INT_MAX;

            if (i > 0)
                val1 = dp[i - 1][j];
            if (j > 0)
                val2 = dp[i][j - 1];

            dp[i][j] = min(val1, val2) + arr[i][j];
        }
    }
    return dp[n - 1][m - 1];
}
ll space(vector<vector<int>> &arr, ll n, ll m)
{
    vector<vector<int>> dp(2, vector<int>(m));

    dp[0][0] = arr[0][0];
    dp[1][0] = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 and j == 0)
                continue;
            ll val1 = INT_MAX, val2 = INT_MAX;

            if (i > 0)
                val1 = dp[0][j];
            if (j > 0)
                val2 = dp[1][j - 1];

            dp[1][j] = min(val1, val2) + arr[i][j];
        }
        dp[0] = dp[1];
    }
    return dp[1][m - 1];
}
void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    for (auto &i : arr)
        for (auto &j : i)
            cin >> j;

    // vector<vector<int>> dp(n, vector<int>(m, -1));
    // cout << recur(arr, n - 1, m - 1, dp) << endl;
    cout << space(arr, n, m) << endl;
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