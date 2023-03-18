#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(ll i, ll j, vector<vector<int>> &arr)
{
    if (i == 0 and j == 0)
        return 1;
    if (i == -1 or j == -1)
        return 0;
    if (arr[i][j] == -1)
        return arr[i][j];
    arr[i][j] = recur(i - 1, j, arr) + recur(i, j - 1, arr);
    return arr[i][j];
}
ll table(ll n, ll m)
{
    vector<vector<int>> dp(n, vector<int>(m, 0));

    dp[0][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 and j == 0)
                continue;
            if (i > 0)
                dp[i][j] += dp[i - 1][j];
            if (j > 0)
                dp[i][j] += dp[i][j - 1];
        }
    }
    return dp[n - 1][m - 1];
}
ll space(ll n, ll m)
{
    vector<vector<int>> arr(2, vector<int>(m, 0));

    arr[1][0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 and j == 0)
                continue;
            if (i > 0)
                arr[1][j] += arr[0][j];
            if (j > 0)
                arr[1][j] += arr[1][j - 1];
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

    // vector<vector<int>> dp(n, vector<int>(m));
    // cout << recur(n - 1, m - 1, dp) << endl;
    cout << space(n, m) << endl;
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