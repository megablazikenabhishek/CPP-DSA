#include <bits/stdc++.h>
using namespace std;
int const N = 1e5 + 10;

int h[N];
int dp[N];
int solve(int i)
{
    if (i == 1)
        return 0;

    if (dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;

    // way 1
    cost = min(solve(i - 1) + abs(h[i] - h[i - 1]), cost);

    // way 2
    if (i > 2)
        cost = min(solve(i - 2) + abs(h[i] - h[i - 2]), cost);

    return dp[i] = cost;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));
    for (int i = 1; i <= n; i++)
        cin >> h[i];

    cout << solve(n);
}