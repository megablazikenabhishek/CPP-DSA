#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(vector<int> &arr, ll indx, ll k, vector<vector<int>> &dp)
{
    if (indx == 0)
        return k % arr[0] == 0;
    if (dp[indx][k] != -1)
        return dp[indx][k];
    ll take = recur(arr, indx - 1, k, dp);
    ll no = 0;
    if (k >= arr[indx])
        no = recur(arr, indx, k - arr[indx], dp);

    return dp[indx][k] = take + no;
}
ll table(vector<int> &arr, ll n, ll k)
{
    vector<vector<int>> dp(n, vector<int>(k + 1));

    for (int i = 0; i < k + 1; i++)
        dp[0][i] = i % arr[0] == 0;

    for (int indx = 1; indx < n; indx++)
    {
        for (int j = 0; j < k + 1; j++)
        {
            ll take = dp[indx - 1][j];
            ll no = 0;
            if (j >= arr[indx])
                no = dp[indx][j - arr[indx]];

            dp[indx][j] = take + no;
        }
    }
    return dp[n - 1][k];
}
void solve()
{
    ll n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    ll k;
    cin >> k;

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