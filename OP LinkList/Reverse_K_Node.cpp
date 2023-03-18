#include "iostream"
using namespace std;

class Node
{
    public:
    int value;
    Node *next;
};

void printList(Node *head)
{
    while (head != nullptr)
    {
        cout<<head->value<<" ";
        head = head->next;
    }cout<<endl;
}

Node *recurHead ;
Node* Reverse(Node *&p, Node *&tail)
{
    if(p->next == tail)
    {
        recurHead = p;
        return p;
    }
    Node *prev = Reverse(p->next, tail);

    prev->next = p;
    p->next = NULL;

    return p;
}

Node* Reverse_K(Node *head, int k)
{
    Node *tail = new Node();
    tail = head;

    for(int i =0; i<k; i++)
    {
        tail = tail->next;
    }

    Node *temp = Reverse(head, tail);

    temp->next = tail;

    printList(recurHead);
}

int main()
{
    Node *first = new Node(); Node *second = new Node(); Node *third = new Node(); Node *fourth = new Node(); Node *fifth = new Node();
    first->value = 1;
    first->next = second;

    second->value = 2;
    second->next=third;

    third->value = 3;
    third->next = fourth;

    fourth->value = 4;
    fourth->next = fifth;

    fifth->value = 5;
    fifth->next = nullptr;

    printList(first);

    Reverse_K(first, 3);

    return 0;
}