#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int Value;
    Node *Next = nullptr; // setting default pointer
};

void printList(Node *n)
{ // made new variable so orginal list is not altered
    while (n != NULL)
    {
        cout << n->Value << " ";
        n = n->Next;
    }
    printf("\n");
}

void insertToTail(Node *&head, int n) //*& call by refernce for pointer
{
    // This is req. node to be added
    Node *elmt = new Node;
    elmt->Value = n;

    // traversing to last element of linkedList
    Node *temp = new Node();
    temp = head;
    while (temp->Next != nullptr)
    {
        temp = temp->Next;
    }
    temp->Next = elmt;
}

int SearchList(Node *head, int key)
{
    while (head != NULL)
    {
        if (head->Value == key)
        {
            return 1;
        }
        head = head->Next;
    }
    return 0;
}

int main()
{
    Node *head = new Node(),
         *second = new Node(),
         *third = new Node();

    // first Element
    head->Value = 1;
    head->Next = second;

    // second Element
    second->Value = 2;
    second->Next = third;

    // third Element
    third->Value = 3;
    third->Next = NULL;

    // understanding call by refrence in pointer
    cout << *&head << endl;
    cout << head << endl;
    //

    printList(head);

    insertToTail(head, 4);
    insertToTail(head, 5);
    insertToTail(head, 6);
    printList(head);

    cout << SearchList(head, 5) << endl;

    return 0;
}