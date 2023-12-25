#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    ll n = a.size();
    ll m = b.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = 0;
        }
    }

    ll ans = 0;
    for (auto &i : dp)
        ans = max(ans, (ll)*max_element(i.begin(), i.end()));

    cout << ans << endl;
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