#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> multiply(vector<vector<ll>> &a, vector<vector<ll>> &b)
{
    vector<vector<ll>> ans(3, vector<ll>(3, 0));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                ans[i][j] = a[i][k] * b[k][j];
            }
        }
    }
    return ans;
}

ll power(vector<vector<ll>> &arr, ll n)
{
    vector<vector<ll>> a = {{1, 1, 1}, {1, 0, 0}, {0, 1, 0}};

    if (n == 1)
        return arr[0][0] + arr[0][1];
    power(arr, n / 2);

    arr = multiply(arr, arr);

    if (n & 1)
        multiply(arr, a);
    return arr[0][0] + arr[0][1];
}

void solve()
{
    ll n;
    cin >> n;

    vector<vector<ll>> arr = {{1, 1, 1}, {1, 0, 0}, {0, 1, 0}};

    if (n == 0)
        cout << 0 << endl;
    else if (n == 1 || n == 2)
        cout << 1 << endl;
    else
        cout << power(arr, n - 2) << endl;
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
    int t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }
    return 0;
}