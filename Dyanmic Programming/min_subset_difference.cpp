#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll table(vector<int> &arr, ll n)
{
    ll sum = accumulate(arr.begin(), arr.end(), 0LL);

    vector<vector<int>> dp(n, vector<int>(sum + 1));

    for (int i = 0; i < n; i++)
        dp[i][0] = 1;
    dp[0][arr[0]] = 1;
    for (int indx = 1; indx < n; indx++)
        for (int j = 1; j <= sum; j++)
            dp[indx][j] = dp[indx - 1][j] or (j >= arr[indx] ? dp[indx - 1][j - arr[indx]] : false);

    ll ans = INT_MAX;

    for (int i = 0; i < sum + 1; i++)
        if (dp[n - 1][i] == 1)
            ans = min(ans, abs(i - (sum - i)));
    return ans;
}

void solve()
{
    ll n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

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