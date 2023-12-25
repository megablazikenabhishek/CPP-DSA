#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define d 31
using namespace std;

void solve()
{
    string s;
    cin >> s;

    ll n = s.length();
    vector<ll> power(n + 2);

    power[0] = 1;
    for (int i = 1; i < n + 2; i++)
        power[i] = (power[i - 1] * d) % mod;

    vector<ll> prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
        prefix[i + 1] = prefix[i] + ((s[i] - 'a' + 1) * power[i]) % mod;

    unordered_map<ll, ll> hmap;
    ll ctn = INT_MIN;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            ll hash = (prefix[j + 1] - prefix[i] + mod) % mod;
            ll val = (hash * power[n - i + 1]) % mod;
            // cout << s.substr(i, j - i + 1) << " " << val << endl;
            hmap[val]++;
            if (hmap[val] > 1 and j - i + 1 > ctn)
            {
                ctn = j - i + 1;
                ans = s.substr(i, j - i + 1);
            }
        }
    }
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
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}