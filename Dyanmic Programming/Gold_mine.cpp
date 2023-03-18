#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp(10000, vector<int>(10000, -1));

int gold_mine(int x, int y, int n, int m, vector<vector<int>> v)
{
    if (x < 0 || x == n || y == m)
        return 0;

    if (dp[x][y] != -1)
        return dp[x][y];

    // upper digonal
    int n1 = gold_mine(x - 1, y + 1, n, m, v) + v[x][y];

    // horizontal
    int n2 = gold_mine(x, y + 1, n, m, v) + v[x][y];

    // lower digonal
    int n3 = gold_mine(x + 1, y + 1, n, m, v) + v[x][y];

    return dp[x][y] = max(max(n1, n2), n3);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;
    vector<vector<int>> v;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp(m);
        for (int j = 0; j < m; j++)
        {
            cin >> temp[j];
        }
        v.push_back(temp);
    }

    int ans = 0;
    // memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++)
    {
        ans = max(gold_mine(i, 0, n, m, v), ans);
    }
    cout << ans;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //         cout << v[i][j] << " ";
    //     cout << endl;
    // }
}