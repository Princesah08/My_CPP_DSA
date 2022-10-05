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
void InsertAtTail(Node *&tail, int NewData)
{
    // create new Node which become Inserted on Tail Node
    Node *NewNode = new Node(NewData);

    // Link next of  tail Node to NULL

    tail->next = NewNode;
    tail = NewNode;
} 
// creating function for traverse the Linked List
void printLL(Node *&head)
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
    Node *Node1 = new Node(100);
    Node *head = Node1;
    Node *tail = Node1;
    // Insert 10 at the tail
    InsertAtTail(tail, 10);

    // printing Linked list 
    printLL(tail); 
}