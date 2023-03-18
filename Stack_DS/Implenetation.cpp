#include <bits/stdc++.h>
using namespace std;

#define n 1000

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x);
    void pop();
    int peep();
    bool isEmpty();
};

void Stack::push(int x)
{
    if (top == n - 1)
        cout << "Stack Overflow\n";

    else
        arr[++top] = x;
}

void Stack::pop()
{
    if (top == -1)
        cout << "No element in Stack\n";

    else
        top--;
}

int Stack::peep()
{
    if (top == -1)
        cout << "No element in Stack\n";

    else
        return arr[top];
}

bool Stack::isEmpty()
{
    return top < 0;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n_;
    cin >> n_;

    Stack stc;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        stc.push(temp);
    }
    stc.pop();
    cout << stc.peep() << endl;
}
