#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    int dig = log2(n) + 1;
    int count = 0, ans = 0;
    for (int i = 0; i < dig; i++)
    {
        if ((ans >> i & 1) == 0)
        {
            ans = max(count, ans);
            count = 0;
        }
        else
            count++;
    }
    return count;
}