#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s;

public:
    void push(int x)
    {
        s.push(x);
    }
    int pop()
    {
        if (s.empty())
        {
            cout << "empty!" << endl;
            return -1;
        }

        int temp = s.top();
        s.pop();
        if (s.empty())
            return temp;
        int item = pop();
        s.push(temp);
        return item;
    }
    bool empty()
    {
        return s.empty() ? true : false;
    }
};

int main()
{
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    cout << Q.empty();
}