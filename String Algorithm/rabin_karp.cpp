#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    string pat, text;
    cin >> text >> pat;

    ll m = pat.length();
    ll n = text.length();

    ll p = 31;
    vector<ll> power(n + 1);
    power[0] = 1;
    for (int i = 1; i < power.size(); i++)
        power[i] = (power[i - 1] * p) % mod;

    vector<ll> prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
        prefix[i + 1] = prefix[i] + ((text[i] - 'a' + 1) * power[i]) % mod;

    ll hash_pat = 0;
    for (int i = 0; i < m; i++)
        hash_pat += ((pat[i] - 'a' + 1) * power[i]) % mod;
    cout << hash_pat << endl;
    for (int i = 0; i + m - 1 < n; i++)
    {
        ll curr = (prefix[i + m] - prefix[i] + mod) % mod;
        if (curr == hash_pat * power[i] % mod)
            cout << i << " ";
    }
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