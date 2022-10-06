#include <bits/stdc++.h>
using namespace std;

// creating class of node
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// creating function to insert a element at head
void InsertAtHead(Node *&head, int NewData)
{
    // create new Node which become Inserted on head Node
    Node *NewNode = new Node(NewData);

    // Link NewNode to head Node
    NewNode->next = head;

    head = NewNode;
}

// creating Recursive function for traverse the Linked List
void RecursivePrint(Node *head)
{
 
    //base case
    if(head==NULL)return; 

    cout << head->data << " "; 
    head = head->next;
    RecursivePrint(head);
}

int main()
{
    // Dynamically create A node
    Node *head = new Node(100);

    // Insert 0 and 10  at the head
    InsertAtHead(head, 1);
    InsertAtHead(head, 23);
    InsertAtHead(head, 20);
    InsertAtHead(head, 10);
    InsertAtHead(head, 5);
    
    // printing Linked list
    RecursivePrint(head);
}