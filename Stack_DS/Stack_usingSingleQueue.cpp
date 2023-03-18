#include <bits/stdc++.h>
using namespace std;

class Stack_DS
{
    queue<int> q;
    int size = 0;

public:
    void push(int val)
    {
        q.push(val);
        size++;

        int temp = size - 1;
        while (temp)
        {
            q.push(q.front());
            q.pop();
            temp--;
        }
    }

    void pop()
    {
        q.pop();
    }

    int top()
    {
        return q.front();
    }
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Stack_DS S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);

    cout << S.top() << endl;

    S.pop();
    S.pop();

    cout << S.top();
}