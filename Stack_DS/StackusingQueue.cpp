#include <bits/stdc++.h>
using namespace std;

class Stack_DS
{
    queue<int> q1;
    queue<int> q2;

public:
    void push(int val)
    {
        q2.push(val);

        while (!q1.empty())
        {
            int temp = q1.front();
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {
        q1.pop();
    }

    int top()
    {
        return q1.front();
    }
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Stack_DS s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.top() << endl;

    s.pop();
    s.pop();

    cout << s.top() << endl;
}