#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getpos(int n)
{
    if (n == 1)
        return 0;
    else
        return sqrt(n);
}

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    std::vector<int> allMSB(64, 0);
    // int allMSB[64]
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        allMSB[getpos(arr[i])]++;
    }

    int64_t count = 0;
    for (int i = 0; i < n; i++)
    {
        int msb = getpos(arr[i]);
        count += max(0, allMSB[i] - 1);
    }
    cout << count / 2 << endl;
    for (int i = 0; i < 64; i++)
    // {
    //     std::cout << allMSB[i] << " ";
    // }
}

int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        solve();
    }

    return 0;
}