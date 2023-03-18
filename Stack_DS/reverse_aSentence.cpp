#include <bits/stdc++.h>
// #include <stack>
using namespace std;

void reverseString(string s)
{
    stack<string> stc;

    for (int i = 0; i < s.length(); i++)
    {
        string temp = "";
        while (s[i] != ' ' && i < s.length())
        {
            temp.push_back(s[i]);
            i++;
        }
        stc.push(temp);
    }

    while (!stc.empty())
    {
        cout << stc.top() << " ";
        stc.pop();
    }
    cout << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);

    reverseString(s);

    return 0;
}