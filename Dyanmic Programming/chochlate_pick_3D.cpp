#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(vector<vector<int>> &arr, ll i, ll j1, ll j2, vector<vector<vector<int>>> &dp)
{
    if (j1 < 0 or j2 < 0 or j1 >= arr[0].size() or j2 >= arr[0].size())
        return -1e8;

    if (i == arr.size() - 1)
    {
        if (j1 == j2)
            return arr[i][j1];
        else
            return arr[i][j1] + arr[i][j2];
    }
    if (dp[i][j1][j2] != -1)
        return dp[i][j1][j2];
    // 9 combos
    ll mx = INT_MIN;
    for (int a = -1; a <= 1; a++)
    {
        for (int b = -1; b <= 1; b++)
        {
            if (j1 == j2)
                mx = max(mx, recur(arr, i + 1, j1 + a, j2 + b, dp) + arr[i][j1]);
            else
                mx = max(mx, recur(arr, i + 1, j1 + a, j2 + b, dp) + arr[i][j1] + arr[i][j2]);
        }
    }
    return dp[i][j1][j2] = mx;
}
ll table(vector<vector<int>> &arr, ll n, ll m)
{
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
                dp[n - 1][i][j] = arr[n - 1][j];
            else
                dp[n - 1][i][j] = arr[n - 1][i] + arr[n - 1][j];
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j1 = 0; j1 < m; j1++)
        {
            for (int j2 = 0; j2 < m; j2++)
            {
                int mx = INT_MIN;
                for (int a = -1; a <= 1; a++)
                {
                    for (int b = -1; b <= 1; b++)
                    {
                        if (j1 == j2 and j1 + a >= 0 and j1 + a < m and j2 + b >= 0 and j2 + b < m)
                            mx = max(mx, arr[i][j1] + dp[i + 1][j1 + a][j2 + b]);
                        if (j1 + a >= 0 and j1 + a < m and j2 + b >= 0 and j2 + b < m)
                            mx = max(mx, dp[i + 1][j1 + a][j2 + b] + arr[i][j1] + arr[i][j2]);
                    }
                }
                dp[i][j1][j2] = mx;
            }
        }
    }

    return dp[0][0][m - 1];
}
void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    for (auto &i : arr)
        for (auto &j : i)
            cin >> j;

    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
    cout << recur(arr, 0, 0, m - 1, dp) << endl;
    // cout << table(arr, n, m) << endl;
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