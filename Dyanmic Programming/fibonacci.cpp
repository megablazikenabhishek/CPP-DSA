#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int dp[N];

// Top Down Approach
int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;

    cout << fibo(n);
}