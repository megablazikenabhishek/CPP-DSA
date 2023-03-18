#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(vector<vector<int>> &arr, ll i, ll j, ll n, vector<vector<int>> &dp)
{
    if (i == n - 1)
        return arr[i][j];

    if (i > n - 1 or j > i + 1)
        return INT_MAX;

    if (dp[i][j] != -1)
        return dp[i][j];

    return dp[i][j] = min(recur(arr, i + 1, j, n, dp), recur(arr, i + 1, j + 1, n, dp)) + arr[i][j];
}
ll table(vector<vector<int>> &arr, ll n)
{
    vector<vector<int>> dp(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        dp[n - 1][i] = arr[n - 1][i];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
            dp[i][j] = min(dp[i + 1][j], dp[i + 1][j + 1]) + arr[i][j];
    }

    return dp[0][0];
}
ll space(vector<vector<int>> &arr, ll n)
{
    vector<vector<int>> dp(2, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        dp[0][i] = arr[n - 1][i];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
            dp[1][j] = min(dp[0][j], dp[0][j + 1]) + arr[i][j];
        dp[0] = dp[1];
    }

    return dp[0][0];
}
void solve()
{
    ll n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n, -1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    // vector<vector<int>> dp(n, vector<int>(n, -1));
    // cout << recur(arr, 0, 0, n, dp) << endl;
    cout << space(arr, n) << endl;
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