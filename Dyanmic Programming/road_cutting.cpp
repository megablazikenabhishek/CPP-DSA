#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(ll indx, ll n, vector<int> &arr, vector<vector<int>> &dp)
{
    if (indx == 0)
        return n * arr[0];
    if (dp[indx][n] != -1)
        return dp[indx][n];
    ll no = recur(indx - 1, n, arr, dp);
    ll take = INT_MIN;
    if (indx + 1 <= n)
        take = arr[indx] + recur(indx, n - indx - 1, arr, dp);

    return dp[indx][n] = max(no, take);
}
ll table(vector<int> &arr, ll n)
{
    vector<vector<int>> dp(n, vector<int>(n + 1));
    for (int i = 0; i <= n; i++)
        dp[0][i] = i * arr[0];

    for (int indx = 1; indx < n; indx++)
    {
        for (int j = 0; j <= n; j++)
        {
            ll no = dp[indx - 1][j];
            ll take = INT_MIN;
            if (indx + 1 <= j)
                take = arr[indx] + dp[indx][j - indx - 1];

            dp[indx][j] = max(no, take);
        }
    }
    return dp[n - 1][n];
}
void solve()
{
    ll n;
    cin >> n;

    vector<int> arr(n);
    for (int &i : arr)
        cin >> i;

    // vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    // cout << recur(n - 1, n, arr, dp) << endl;
    cout << table(arr, n) << endl;
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