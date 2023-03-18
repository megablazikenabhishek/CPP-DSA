// Given N string
// print unique string in lexi order with their frequency

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] += 1;
    }
    for (auto it : m)
        cout << it.first << " " << it.second << endl;
}
