#include <bits/stdc++.h>
#define ll long long
using namespace std;

void printAll(vector<int> &arr, ll indx, vector<int> &sub)
{
    if (indx < 0)
    {
        for (auto &i : sub)
            cout << i << " ";
        cout << endl;
        return;
    }

    // pick
    sub.push_back(arr[indx]);
    printAll(arr, indx - 1, sub);

    // not pick
    sub.pop_back();
    printAll(arr, indx - 1, sub);
}
bool recur(vector<int> &arr, ll indx, ll k, vector<vector<int>> &dp)
{
    if (k == 0)
        return true;
    if (indx == 0)
        return arr[0] == k;
    if (dp[indx][k] != -1)
        return dp[indx][k];
    // no take
    bool not_take = recur(arr, indx - 1, k, dp);
    // take
    bool take = false;
    if (k >= arr[indx])
        take = recur(arr, indx - 1, k - arr[indx], dp);

    return dp[indx][k] = take or not_take;
}
bool table(vector<int> &arr, ll n, ll k)
{
    vector<vector<int>> dp(n + 1, vector<int>(k + 1));
    for (int i = 0; i < n; i++)
        dp[i][0] = 1;
    dp[0][arr[0]] = 1;
    for (int indx = 1; indx < n; indx++)
    {
        for (int j = 1; j <= k; j++)
        {
            // no take
            bool not_take = dp[indx - 1][j];
            // take
            bool take = false;
            if (j >= arr[indx])
                take = dp[indx - 1][j - arr[indx]];

            dp[indx][j] = take or not_take;
        }
    }
    return dp[n - 1][k];
}
bool space(int n, int k, vector<int> &arr)
{
    vector<vector<bool>> dp(2, vector<bool>(k + 1));
    dp[0][0] = dp[1][0] = 1;
    // dp[0][arr[0]] = 1;
    for (int indx = 1; indx < n; indx++)
    {
        for (int j = 1; j <= k; j++)
        {
            // no take
            bool not_take = dp[0][j];
            // take
            bool take = 0;
            if (j >= arr[indx])
                take = dp[0][j - arr[indx]];

            dp[1][j] = take or not_take;
        }
        dp[0] = dp[1];
    }
    return dp[0][k];
}
void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
    // printAll(arr, n - 1, sub);
    // cout << recur(arr, n - 1, k, dp) << endl;
    cout << table(arr, n, k) << endl;
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