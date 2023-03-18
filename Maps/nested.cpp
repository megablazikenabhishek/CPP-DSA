#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    map<pair<string, string>, vector<ll>> m;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string fi, sc;
        cin >> fi >> sc;

        int ct;
        cin >> ct;
        vector<ll> temp(ct);
        for (int i = 0; i < ct; i++)
        {
            cin >> temp[i];
        }

        m[{fi, sc}] = temp;
    }

    for (auto &it : m)
    {
        // storing the pair first;
        pair<string, string> names = it.first;
        vector<ll> scores = it.second;

        cout << names.first << " " << names.second << endl;

        for (auto &i : scores)
            cout << i << " ";

        cout << endl;
    }
}