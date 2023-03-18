#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int arr[N];
int dp[N];
int lis(int index)
{
    if (dp[index] != -1)
        return dp[index];
    int ans = 1;
    for (int j = 0; j < index; j++)
    {
        if (arr[j] < arr[index])
            ans = max(ans, lis(j) + 1); //+1 for adding the current elmt
    }
    return dp[index] = ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // iterating for every element and doing recursive calls
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, lis(i));
    }
    cout << ans;
}