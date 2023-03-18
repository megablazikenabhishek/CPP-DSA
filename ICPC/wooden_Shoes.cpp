#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    while (--n)
    {
        string s;
        cin >> s;

        int leftCount = 0, rightCount = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'L')
                leftCount++;
            else
                rightCount++;
        }
        // cout << leftCount << " " << rightCount;
        if (leftCount == rightCount)
            cout << "OK" << endl;
        else
            cout << "missing\n";
    }
}