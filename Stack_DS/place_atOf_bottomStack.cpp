#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }

    int temp = s.top();
    s.pop();

    solve(s, x);

    s.push(temp);
}

void display(stack<int> &s)
{
    while (!s.empty())
    {
        int n = s.top();
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    stack<int> s;

    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.push(temp);
    }
    solve(s, x);
    display(s);
}