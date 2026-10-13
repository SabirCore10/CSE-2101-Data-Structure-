#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node* next;     // A Node pointer to the next node in my linked list

    Node (int val)
    {
        value = val;
        next = NULL;
    }    
};


int main()
{
    Node* head = new Node(10);     
    Node * Second = new Node(20);
    Node * Third = new Node(30);
    Node * Fourth = new Node(40);
    Node * Five = new Node(50);

    head->next = Second;
    Second->next = Third;
    Third->next = Fourth;
    Fourth->next = Five;

    Node *temp = head;

    while(temp!=NULL)
    {
        cout<<temp->value<<endl;
         temp = temp->next;    
    }

    return 0;
}