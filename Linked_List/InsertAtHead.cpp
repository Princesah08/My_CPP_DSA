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

// creating function for traverse the Linked List
void printLL(Node *head)
{

    // creating copy Node 'copyNode'
    Node *copyNode = head;

    // loop for printing the LL
    while (copyNode != NULL)
    {
        cout << copyNode->data << " ";
        copyNode = copyNode->next;
    }
}

int main()
{
    // Dynamically create A node
    Node *head = new Node(100);

    // Insert 0 and 10  at the head
    InsertAtHead(head, 10);
    InsertAtHead(head, 0);
    
    // printing Linked list
    printLL(head);
}