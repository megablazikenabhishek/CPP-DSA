#include <bits/stdc++.h>
#define ll long long
using namespace std;

void printall(string s, string output)
{
    if (s.empty())
    {
        cout << output << endl;
        return;
    }

    printall(s.substr(1), output + s[0]);
    printall(s.substr(1), output);
}

ll recur(ll i, ll j, string a, string b, vector<vector<int>> &dp)
{
    if (i < 0 or j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    // match
    if (a[i] == b[j])
        return dp[i][j] = 1 + recur(i - 1, j - 1, a, b, dp);
    // no-match
    return dp[i][j] = max(recur(i - 1, j, a, b, dp), recur(i, j - 1, a, b, dp));
}

string printans(string a, string b)
{
    ll n = a.length();
    ll m = b.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 0; i < n + 1; i++)
        dp[i][0] = 0;
    for (int i = 0; i < m + 1; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // match
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            // no-match
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    ll i = n, j = m;
    string ans;
    while (i > 0 and j > 0)
    {
        if (a[i - 1] == b[j - 1])
            ans.push_back(a[i - 1]), i--, j--;
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
ll table(string a, string b)
{
    ll n = a.length();
    ll m = b.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 0; i < n + 1; i++)
        dp[i][0] = 0;
    for (int i = 0; i < m + 1; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // match
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            // no-match
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}
void solve()
{
    string a, b;
    cin >> a >> b;

    // vector<vector<int>> dp(a.length(), vector<int>(b.length(), -1));
    // cout << recur(a.length() - 1, b.length() - 1, a, b, dp) << endl;
    cout << printans(a, b) << endl;
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