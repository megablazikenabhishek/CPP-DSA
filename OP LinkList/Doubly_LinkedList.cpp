#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int value;
    Node *prev  = nullptr; 
    Node *next = nullptr;
};

void InsertAtTail(Node *&head, int value)
{
    if (head == nullptr)
    {
        head = new Node;
        head->value = value;
        return;
    }
    
    Node *newNode = new Node;
    newNode->value = value;

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp; 
}

void InsertAtHead(Node *&head, int value)
{
    if(head == nullptr)
    {
        InsertAtTail(head, value);
        return;
    }

    Node *newNode = new Node;
    newNode->value = value;
    newNode->next = head;

    head->prev = newNode;
    head = head->prev;
}

void PrintList(Node *head)
{
    while (head != nullptr)
    {
        cout<<head->value<<" ";
        head = head->next;
    }cout<<endl;
}

void deleteNode(Node *&head, int pos)
{
    if(pos == 1)
    {
        Node *temp = head;
         
        head = head->next;
        head->prev = nullptr;

        delete temp;
        return;
    }

    Node *temp = head;
    int count = 1;
    while (temp != nullptr && pos != count)
    {
        temp = temp->next;
        count++;
    }
    
    temp->prev->next = temp->next;

    if(temp->next != nullptr) {temp->next->prev = temp->next;}

    delete temp;
}

int main()
{
    Node *head = nullptr;

    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5); PrintList(head);

    InsertAtHead(head, 6);
    InsertAtHead(head, 7);
    InsertAtHead(head, 8);

    PrintList(head);

    deleteNode(head, 2);
    deleteNode(head, 7);

    PrintList(head);
    return 0;
}