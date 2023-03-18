#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int min = 0;

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] + 1 != v[i + 1])
        {
            ans += v[min];
            min = i + 1;
        }
    }

    if (v[n - 1] - 1 != v[n - 2])
        ans += v[n - 1];
    else
        ans += v[min];
    cout << ans << " ";
}