#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    unordered_map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++; // O(1)
    }

    for (auto it : m)
        cout << it.first << " " << it.second << endl;
    cout << endl;

    auto it = m.find("yyy"); // O(1)
    if (it != m.end())
        cout << (*it).first << " " << (*it).second << endl;

    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << m[s] << "\n";
    }
}