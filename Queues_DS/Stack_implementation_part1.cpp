#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }

    void pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty!!" << endl;
            return;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
        }
    }

    bool empty()
    {
        if (s1.empty() && s2.empty())
            return true;
        return false;
    }
};

int main()
{
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    cout << Q.empty();
    Q.pop();
    Q.pop();
    Q.pop();
    cout << Q.empty();
}