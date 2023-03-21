#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(vector<int> &arr, ll indx, ll k, vector<vector<int>> &dp)
{
    if (k == 0)
        return 1;
    if (indx == 0)
        return arr[indx] == k;
    if (dp[indx][k] != -1)
        return dp[indx][k];

    return dp[indx][k] = recur(arr, indx - 1, k, dp) + (k >= arr[indx] ? recur(arr, indx - 1, k - arr[indx], dp) : 0);
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<int> num(n);
    for (auto &i : num)
        cin >> i;

    vector<int> arr;
    ll ctn = 0;
    for (int &i : num)
    {
        if (i == 0)
            ctn++;
        else
            arr.push_back(i);
    }

    vector<vector<int>> dp(n, vector<int>(k + 1, -1));
    // cout << ctn << endl;
    cout << recur(arr, n - 1 - ctn, k, dp) * (1LL << ctn) << endl;
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