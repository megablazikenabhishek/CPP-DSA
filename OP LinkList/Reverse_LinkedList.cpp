#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int value;
    Node *next;
}
;

Node* ItratorMethod(Node* &head)
{
    Node* prev = nullptr;
    Node* curr = head;
    Node* nextPtr = head->next;

    while(curr != nullptr)
    {
        curr->next = prev;

        prev = curr;
        curr = nextPtr;

        if(nextPtr != nullptr)
        nextPtr = nextPtr->next;
    }

    return prev;
}

void PrintList(Node *head)
{
    while (head != nullptr)
    {
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node *recurHead;
Node* recursiveMethod(Node* & p)
{
    if(p->next == nullptr)   //reach last node
    {
        recurHead = p;
        return p;
    }

    Node *prev = recursiveMethod(p->next);
    
    prev->next = p;
    p->next = nullptr;

    return p;
}

int main()
{
    Node *n1 = new Node, 
    *n2 = new Node, 
    *n3 = new Node;
    
    n1->value = 1;
    n1->next = n2;

    n2->value = 2;
    n2->next = n3;

    n3->value = 3;
    n3->next = nullptr;

    PrintList(n1);

    // After reversing
    Node* newHead = (ItratorMethod(n1));
    PrintList(newHead);

    //Please ignore this non-sense
    recursiveMethod(newHead);
    PrintList(recurHead);

    return 0;
}