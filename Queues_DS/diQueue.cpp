#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);

    dq.push_front(3);
    dq.push_front(4);

    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << dq.size() << endl;
    dq.pop_front();
    dq.pop_back();

    for (auto i : dq)
    {
        cout << i << " ";
    }
}