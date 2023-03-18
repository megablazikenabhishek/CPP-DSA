#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1010, -1);

int func(int amount, vector<int> coins)
{
    if (!amount)
        return 0;

    if (dp[amount] != -1)
        return dp[amount];

    int ans = INT_MAX;
    for (int coin : coins)
    {
        if (amount - coin >= 0)
            ans = min(ans + 0LL, func(amount - coin, coins) + 1LL);
    }

    return dp[amount] = ans;
}

int coinChange(vector<int> &coins, int amount)
{
    int ans = func(amount, coins);
    return ans == INT_MAX ? -1 : ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> coins(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> coins[i];
    // }
    for (auto &i : coins)
        cin >> i;
    int amount;
    cin >> amount;
    cout << coinChange(coins, amount);
}