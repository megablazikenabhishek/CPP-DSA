#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
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
        node *naya = new node();
        cin >> naya->data;
        temp->next = naya;
        temp = temp->next;
    }
    return head->next;
}

node *Merge(node *head1, node *head2)
{
    if (head1 == nullptr)
    {
        return head1;
    }
    else if (head2 == nullptr)
    {
        return head2;
    }

    node *result = new node();
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = Merge(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = Merge(head1, head2->next);
    }
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