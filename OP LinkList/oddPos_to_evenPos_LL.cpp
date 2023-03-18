#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next = nullptr;
};

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

void display(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void oddPos_to_evenPos(node *head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = head->next;

    while (odd->next != nullptr && even->next != nullptr)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    node *head = new node();
    head = input(n);

    // display(head);

    oddPos_to_evenPos(head);
    display(head);
    return 0;
}