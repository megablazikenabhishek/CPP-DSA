#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define mod 1000000007

int recur(vector<vector<int>> &arr, int i, int j, vector<vector<int>> &dp)
{
    if (i == 0 and j == 0)
        return 1;
    if (i < 0 or j < 0)
        return 0;
    if (arr[i][j] == -1)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j] % mod;

    dp[i][j] = (recur(arr, i - 1, j, dp) % mod + recur(arr, i, j - 1, dp) % mod) % mod;
    return dp[i][j];
}
ll table(ll n, ll m, vector<vector<int>> &arr)
{
    vector<vector<int>> dp(n, vector<int>(m));

    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 and j == 0)
                continue;
            if (arr[i][j] == -1)
            {
                dp[i][j] = 0;
                continue;
            }
            if (i > 0)
                dp[i][j] += dp[i - 1][j];
            if (j > 0)
                dp[i][j] += dp[i][j - 1];
        }
    }
    return dp[n - 1][m - 1];
}
ll space(ll n, ll m, vector<vector<int>> &arr)
{
    vector<vector<int>> dp(2, vector<int>(m, 0));

    arr[1][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 and j == 0)
                continue;
            if (arr[i][j] == -1)
            {
                dp[i][j] = 0;
                continue;
            }
            if (i > 0)
                dp[1][j] = (dp[0][j] % mod + dp[1][j] % mod) % mod;
            if (j > 0)
                dp[1][j] += (dp[0][j - 1] % mod + dp[1][j] % mod) % mod;
        }
        // swap(arr[1], arr[0]);
        // arr[0] = arr[1];
    }
    return arr[1][m - 1];
}
void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    for (auto &i : arr)
        for (auto &j : i)
            cin >> j;

    // cout << recur(arr, n - 1, m - 1, dp) << endl;
    cout << space(n, m, arr) << endl;
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