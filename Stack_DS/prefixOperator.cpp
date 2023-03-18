#include <bits/stdc++.h>
using namespace std;

int prefixOperator(string s)
{
    stack<int> stac;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            stac.push(s[i] - '0');
        }

        else
        {
            int n1 = stac.top();
            stac.pop();
            int n2 = stac.top();
            stac.pop();

            switch (s[i])
            {
            case '+':
                stac.push(n1 + n2);
                break;

            case '-':
                stac.push(n1 - n2);
                break;

            case '*':
                stac.push(n1 * n2);
                break;

            case '/':
                stac.push(n1 / n2);
                break;

            default:
                break;
            }
        }
    }
    return stac.top();
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;

    cout << prefixOperator(s);
}