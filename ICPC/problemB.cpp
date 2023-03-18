#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int m, k;
    cin >> m >> k;

    string arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    string ansKey = "";
    for (int i = 0; i < k; i++)
    {
        int countT = 0, countF = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[j][i] == 'T')
                countT++;
            else
                countF++;
        }
        ansKey.push_back(countT > countF ? 'T' : 'F');
        // (countT > countF) ? cout << 'T' : cout << 'F';
    }

    int ans = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        int score = 0;
        for (int j = 0; j < k; j++)
        {
            if (ansKey[j] == arr[i][j])
            {
                score++;
            }
        }
        ans = min(score, ans);
    }
    cout << ans;
}