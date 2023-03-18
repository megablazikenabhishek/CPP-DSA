#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int n)
    {
        data = n;
        next = nullptr;
    }
};

class Queue
{
    node *front = nullptr;
    node *back = nullptr;

public:
    void push(int x)
    {
        node *n = new node(x);

        if (front == nullptr && back == nullptr)
        {
            front = n;
            back = n;
            return;
        }

        back->next = n;
        back = back->next;
    }

    void pop()
    {
        if (front == nullptr)
        {
            cout << "Queue is overflow\n";
            return;
        }
        node *toDelete = front;
        front = front->next;
        delete toDelete;
    }

    int peek()
    {
        if (front == nullptr)
        {
            cout << "Queue is overflow\n";
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == nullptr)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.empty() << endl;
    q.pop();
    q.pop();
    cout << q.peek();
}