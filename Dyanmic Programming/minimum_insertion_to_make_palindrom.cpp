#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(string &a, string &b, ll i, ll j, vector<vector<int>> &dp)
{
    if (i < 0 or j < 0)
        return 0;
    if (a[i] == b[j])
        return dp[i][j] = 1 + recur(a, b, i - 1, j - 1, dp);
    return dp[i][j] = max({recur(a, b, i - 1, j, dp), recur(a, b, i, j - 1, dp)});
}

void table(string &a, string &b, ll n)
{
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << dp[n][n] << endl;
}

void solve()
{
    ll n;
    cin >> n;
    string s1, s2;
    cin >> s1;
    s2 = s1;

    reverse(s2.begin(), s2.end());

    vector<vector<int>> dp(n, vector<int>(n));

    // cout << recur(s1, s2, n - 1, n - 1, dp);
    table(s1, s2, n);
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
    int t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }
    return 0;
}