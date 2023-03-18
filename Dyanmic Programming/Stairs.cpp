#include <bits/stdc++.h>
using namespace std;
int const N = 1e5 + 10;

long long ans = 0;
int dp[N];
void solve(int i)
{
    if (i == 0)
    {
        ans++;
        return;
    }

    solve(i - 1);
    if (i > 1)
        solve(i - 2);
}

int main()
{
    // int n;
    // cin >> n;
    // solve(n);
    long long a = 1e10;
    long long b = 1e10 + 8;
    long long m = 1e9 + 7;
    cout << (a % m + b % m) % m << " ";
    cout << (a + b) % m;
}