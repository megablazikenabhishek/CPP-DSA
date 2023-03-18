#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next = nullptr;
};

void displayList(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *input(int n)
{
    node *head = new node();
    node *temp = head;
    for (int i = 0; i < n; i++)
    {
        node *newelmt = new node();
        cin >> newelmt->data;
        temp->next = newelmt;
        temp = temp->next;
    }
    return head->next;
}

node *Merge(node *head1, node *head2)
{
    node *_Dummy = new node();
    node *head = new node();
    head = _Dummy;
    while (head1 != nullptr && head2 != nullptr)
    {
        if (head1->data < head2->data)
        {
            _Dummy->next = head1;
            _Dummy = _Dummy->next;
            head1 = head1->next;
        }
        else
        {
            _Dummy->next = head2;
            _Dummy = _Dummy->next;
            head2 = head2->next;
        }
    }

    while (head1 != nullptr)
    {
        _Dummy->next = head1;
        _Dummy = _Dummy->next;
        head1 = head1->next;
    }

    while (head2 != nullptr)
    {
        _Dummy->next = head2;
        _Dummy = _Dummy->next;
        head2 = head2->next;
    }
    return head->next;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;

    node *head1 = new node();
    head1 = input(n);

    node *head2 = new node();
    head2 = input(n - 1);

    displayList(Merge(head1, head2));
}