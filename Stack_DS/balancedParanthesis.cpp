#include <bits/stdc++.h>
using namespace std;

bool Paranthesis(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);

        else if (s[i] == ')')
        {
            if (st.top() == '(')
                st.pop();
            else
                return false;
        }
        else if (s[i] == ']')
        {
            if (st.top() == '[')
                st.pop();
            else
                return false;
        }
        else if (s[i] == '{')
        {
            if (st.top() == '}')
                st.pop();
            else
                return false;
        }
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    cin >> s;

    cout << Paranthesis(s);
}