#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int value;
    Node* next;
};

void Insert(Node* &head, int val)
{
    //making a new node
    Node *insert = new Node;
    insert->value = val;
    insert->next = nullptr;

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = insert;
}

void Deletion (Node* &head, int positon)
{
    //getting to n-1 position
    Node *temp = head;
    for(int i = 1; i<positon-1; i++)
    {
        temp = temp->next;
    }

    //saving the node which is to be deleted
    Node *toDelete = temp->next;

    //giving address to next to next node i.e. n+1 node
    temp->next = temp->next->next;

    //phsically deleting n positon
    delete toDelete;
}

void printList(Node *head)
{
    while (head != nullptr)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node *head;
    head->next=nullptr;

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;

        if(i == 0)
        {
            head->value = temp;
            goto Label;
        }
        Insert(head, temp);

        Label:
        //some kind of nonsense
        temp = 1+1 ;
    }
    
    printList(head);

    int positon;
    cin>>positon;
    Deletion(head, positon);

    printList(head);
    return 0;
}