#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool recur(vector<int> &arr, ll indx, ll k, vector<vector<int>> &dp)
{
    if (k == 0)
        return true;
    if (indx == 0)
        return arr[indx] == k;
    if (dp[indx][k] != -1)
        return dp[indx][k];

    return dp[indx][k] = recur(arr, indx - 1, k, dp) or (k >= arr[indx] ? recur(arr, indx - 1, k - arr[indx], dp) : false);
}

void solve()
{
    ll n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    ll sum = accumulate(arr.begin(), arr.end(), 0LL);

    if (sum & 1)
    {
        cout << 0 << endl;
        return;
    }
    vector<vector<int>> dp(n + 1, vector<int>(sum / 2 + 1, -1));
    cout << recur(arr, n - 1, sum / 2, dp) << endl;
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