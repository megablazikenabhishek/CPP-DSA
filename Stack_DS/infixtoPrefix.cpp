#include <bits/stdc++.h>
using namespace std;

int pre(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;

    else
        return -1;
}

void infixtoPrefix(string s)
{
    reverse(s.begin(), s.end());

    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            result += s[i];
        }

        else if (s[i] == ')')
            st.push(s[i]);

        else if (s[i] == '(')
        {
            while (!st.empty() && st.top() != ')')
            {
                result += st.top();
            }
            if (!st.empty())
                st.pop();
        }

        else
        {
            while (st.empty() && pre(st.top()) >= pre(s[i]))
            {
                result += s[i];
                st.pop();
            }
        }
    }
    reverse(result.begin(), result.end());
    cout << result;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;

    infixtoPrefix(s);
}