#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string m, w;
    cin >> m >> w;

    if (m.length() > w.length())
    {
        for (int i = 0, j = 0; i < w.length(); i++)
        {
            // int j=0;
            while (j < m.length())
            {
                if (w[i] == m[j])
                {
                    j++;
                    break;
                }
                j++;
            }

            if (j >= m.length())
            {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
    else if (w.length() > m.length())
    {
        for (int i = 0, j = 0; i < m.length(); i++)
        {
            while (j < w.length())
            {
                if (m[i] == w[j])
                {
                    j++;
                    break;
                }
                if (j >= w.length())
                {
                    cout << "NO\n";
                    return;
                }
                j++;
            }
        }
        cout << "YES\n";
    }
    else
    {
        // sort(m.begin(), m.end());
        // sort(w.begin(), w.end());
        if (m == w)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
