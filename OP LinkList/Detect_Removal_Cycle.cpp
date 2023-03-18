#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int value;
    Node *next;
};

void InsertAtTail(Node *&head, int n)
{
    if(head->value == 0 && head->next==nullptr)
    {
        head->value = n;
        head->next = nullptr;
        return;
    }

    Node *newNode = new Node();
    newNode->value = n;
    newNode->next = nullptr;

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }temp->next = newNode;
}

void PrintList(Node *head)
{
    while (head != nullptr)
    {
        cout<<head->value<<" ";
        head = head->next;
    }cout<<endl;
}

void AddCycle(Node *head, int pos)
{
    Node *Start;

    int count =1;
    while (head->next != nullptr)
    {
        if(count == pos)
        {
            Start = head;
        }

        head = head->next;
        count++;
    }
    
    head->next = Start;
}

//hair and tuturle method
bool DetectCycle(Node *head)
{
    Node *Slow = head;
    Node *Fast = head;

    while (Fast != nullptr && Fast->next != nullptr)
    {
        if(Slow == Fast)
        {
            return true;
        }

        Slow = Slow->next;
        Fast = Fast->next->next;
    }
    
    return false;
}

void RemoveCycle(Node *head)
{
    Node *Slow = head;
    Node *Fast = head;

    do
    {
        //reaching the point which they are equal
        Slow = Slow->next;
        Fast = Fast->next->next;   
    }while (Slow != Fast);
    
    Fast = head;
    while(Slow->next != Fast->next)
    {
        Slow = Slow->next;
        Fast = Fast->next;
    }

    //pointing the last node to nullptr
    Slow->next = nullptr;
}

int main()
{
    Node *head = new Node();

    for (int i = 0; i < 7; i++)
    {
        InsertAtTail(head, i+1);
    }
    
    AddCycle(head, 4);

    // PrintList(head);

    cout<< (DetectCycle(head)) <<endl;

    RemoveCycle(head);

    PrintList(head);
    return 0;
}