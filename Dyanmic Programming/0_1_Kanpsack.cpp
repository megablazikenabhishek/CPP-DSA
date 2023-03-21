#include <bits/stdc++.h>
#define ll long long
#define vpl vector<pair<ll, ll>>
#define vvl vector<vector<int>>
#define vl vector<int>
using namespace std;

ll recur(ll indx, ll w, vpl &arr, vvl &dp)
{
    if (w == 0)
        return 0;
    if (indx == 0)
    {
        if (arr[0].second <= w)
            return arr[0].first;
        else
            return 0;
    }
    if (dp[indx][w] != -1)
        return dp[indx][w];

    // notake
    ll no = recur(indx - 1, w, arr, dp);
    // take
    ll take = arr[indx].second <= w ? recur(indx - 1, w - arr[indx].second, arr, dp) + arr[indx].first : INT_MIN;

    return dp[indx][w] = max(no, take);
}
ll table(vpl arr, ll n, ll w)
{
    vvl dp(n, vl(w + 1, 0));
    for (int i = 0; i < n; i++)
        dp[i][0] = 0;

    for (int i = arr[0].second; i <= w; i++)
        dp[0][i] = arr[0].first;

    for (int indx = 1; indx < n; indx++)
    {
        for (int j = 0; j <= w; j++)
        {
            ll no = dp[indx - 1][j];
            // take
            ll take = arr[indx].second <= j ? dp[indx - 1][j - arr[indx].second] + arr[indx].first : INT_MIN;

            dp[indx][j] = max(no, take);
        }
    }
    return dp[n - 1][w];
}
void solve()
{
    ll n;
    cin >> n;

    vpl arr(n);
    for (auto &i : arr)
        cin >> i.second;
    for (auto &i : arr)
        cin >> i.first;
    ll w;
    cin >> w;

    // vvl dp(n, vl(w + 1, -1));
    // cout << recur(n - 1, w, arr, dp) << endl;
    cout << table(arr, n, w) << endl;
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