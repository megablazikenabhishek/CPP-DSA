#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(ll indx, ll k, vector<int> &arr, vector<vector<int>> &dp)
{
    if (indx == 0)
    {
        if (k % arr[0] == 0)
            return k / arr[0];
        else
            return 1e9;
    }
    if (dp[indx][k] != -1)
        return dp[indx][k];
    // no take
    ll notake = recur(indx - 1, k, arr, dp);
    // take
    ll take = 1e9;
    if (k >= arr[indx])
        take = 1 + recur(indx, k - arr[indx], arr, dp);

    return dp[indx][k] = min(take, notake);
}
ll table(vector<int> &arr, ll n, ll k)
{
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));

    for (int i = 0; i <= k; i++)
    {
        dp[0][i] = i % arr[0] ? 1e9 : i / arr[0];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            // no take
            ll notake = dp[i - 1][j];
            // take
            ll take = 1e9;
            if (j >= arr[i])
                take = 1 + dp[i][j - arr[i]];

            dp[i][j] = min(take, notake);
        }
    }
    return dp[n - 1][k];
}
void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int &i : arr)
        cin >> i;

    // vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    // cout << recur(n - 1, k, arr, dp) << endl;
    cout << table(arr, n, k) << endl;
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