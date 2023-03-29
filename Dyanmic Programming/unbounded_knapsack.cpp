#include <bits/stdc++.h>
#define ll long long
#define vpl vector<pair<ll, ll>>
using namespace std;

ll recur(vpl &arr, ll indx, ll k, vector<vector<int>> &dp)
{
    if (k == 0)
        return 0;
    if (indx == 0)
        return arr[0].second <= k ? arr[0].first * (k / arr[0].second) : 0;
    if (dp[indx][k] != -1)
        return dp[indx][k];
    // no take
    ll no = recur(arr, indx - 1, k, dp);
    // take
    ll take = INT_MIN;
    if (arr[indx].second <= k)
        take = max(take, recur(arr, indx, k - arr[indx].second, dp) + arr[indx].first);
    return dp[indx][k] = max(no, take);
}
ll table(vpl &arr, ll n, ll k)
{
    vector<vector<int>> dp(n, vector<int>(k + 1));

    for (int i = 0; i < n; i++)
        dp[i][0] = 0;

    for (int i = 0; i < k + 1; i++)
        dp[0][i] = arr[0].second <= i ? arr[0].first * (i / arr[0].second) : 0;

    for (int indx = 1; indx < n; indx++)
    {
        for (int j = 0; j <= k; j++)
        {
            ll no = dp[indx - 1][j];
            // take
            ll take = INT_MIN;
            if (arr[indx].second <= j)
                take = max(take, dp[indx][j - arr[indx].second] + arr[indx].first);
            dp[indx][j] = max(no, take);
        }
    }
    return dp[n - 1][k];
}
void solve()
{
    ll n, k;
    cin >> n >> k;

    vpl arr(n);
    for (auto &i : arr)
        cin >> i.first;
    for (auto &i : arr)
        cin >> i.second;

    // vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    // cout << recur(arr, n - 1, k, dp) << endl;
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