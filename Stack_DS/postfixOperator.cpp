#include <bits/stdc++.h>
using namespace std;

int postfixOperator(string s)
{
    stack<int> stc;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            stc.push(s[i] - '0');
        }

        else
        {
            int n2 = stc.top();
            stc.pop();

            int n1 = stc.top();
            stc.pop();

            switch (s[i])
            {
            case '+':
                stc.push(n1 + n2);
                break;

            case '-':
                stc.push(n1 - n2);
                break;

            case '*':
                stc.push(n1 * n2);
                break;

            case '/':
                stc.push(n1 / n2);
                break;

            default:
                break;
            }
        }
    }
    return stc.top();
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;

    cout << postfixOperator(s);
}