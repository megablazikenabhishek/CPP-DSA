#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(vector<vector<int>> &arr, ll i, ll j, vector<vector<int>> &dp)
{
    if (j < 0 or j >= arr[0].size())
        return INT_MIN;
    if (i == 0)
        return arr[i][j];

    if (dp[i][j] != -1)
        return dp[i][j];

    ll mx = INT_MIN;
    for (int a = -1; a <= 1; a++)
        mx = max(mx, arr[i][j] + recur(arr, i - 1, j + a, dp));

    return dp[i][j] = mx;
}

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (auto &i : arr)
        for (auto &j : i)
            cin >> j;

    vector<vector<int>> dp(n, vector<int>(m, -1));
    ll ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, recur(arr, n - 1, i, dp));
    }
    cout << ans << endl;
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