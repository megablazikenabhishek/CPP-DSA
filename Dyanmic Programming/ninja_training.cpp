#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(vector<vector<int>> &arr, ll indx, ll last, vector<vector<int>> &dp)
{
    if (indx == -1)
        return 0;
    if (last != 3 and dp[indx][last] != -1)
        return dp[indx][last];
    ll mx = INT_MIN;

    for (int i = 0; i < 3; i++)
    {
        if (i != last)
            mx = max(mx, arr[indx][i] + recur(arr, indx - 1, i, dp));
    }
    if (last != 3)
        dp[indx][last] = mx;
    return mx;
}
ll table(vector<vector<int>> &arr, ll n)
{
    vector<vector<int>> dp(n, vector<int>(4, 0));

    dp[0][0] = max(arr[0][1], arr[0][2]);
    dp[0][1] = max(arr[0][0], arr[0][2]);
    dp[0][2] = max(arr[0][1], arr[0][0]);
    dp[0][3] = max(arr[0][1], max(arr[0][2], arr[0][1]));

    for (int indx = 1; indx < n; indx++)
    {
        for (int last = 0; last < 4; last++)
        {
            for (int i = 0; i < 3; i++)
                if (i != last)
                    dp[indx][last] = max(dp[indx][last], dp[indx - 1][i] + arr[indx][i]);
        }
    }
    return dp[n - 1][3];
}
ll space(vector<vector<int>> &arr, ll n)
{
    vector<vector<int>> dp(2, vector<int>(4, 0));

    dp[0][0] = max(arr[0][1], arr[0][2]);
    dp[0][1] = max(arr[0][0], arr[0][2]);
    dp[0][2] = max(arr[0][1], arr[0][0]);
    dp[0][3] = max(arr[0][1], max(arr[0][2], arr[0][1]));

    for (int indx = 1; indx < n; indx++)
    {
        for (int last = 0; last < 4; last++)
        {
            for (int i = 0; i < 3; i++)
                if (i != last)
                    dp[1][last] = max(dp[1][last], dp[0][i] + arr[indx][i]);
        }
        dp[0] = dp[1];
    }
    return dp[1][3];
}
void solve()
{
    ll n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(3));
    for (auto &i : arr)
        for (auto &j : i)
            cin >> j;

    // vector<vector<int>> dp(100000, vector<int>(3, -1));
    // cout << recur(arr, n - 1, 3, dp) << endl;
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