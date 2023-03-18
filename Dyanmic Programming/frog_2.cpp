#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int h[N];
int dp[N];
int k;

int solve(int i)
{
    if (i == 1)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;

    // runing the (for loop) for the test cases
    for (int j = 1; j <= k; j++)
    {
        if (i - j >= 1)
            cost = min(cost, abs(h[i - j] - h[i]) + solve(i - j));
    }
    return dp[i] = cost;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> h[i];

    memset(dp, -1, sizeof(dp));
    cout << solve(n);
}