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

// Function for finding largst number in Liked list
int LargestElement(Node *head)
{
    int largest = INT_MIN;
    while (head != NULL)
    {
        largest = max(head->data, largest);
        head = head->next;
    }
    return largest;
}
int main()
{
    // Dynamically create A node
    Node *Node1 = new Node(100);
    Node *head = Node1;
    Node *tail = Node1;
    // Insert 10 at the tail
    InsertAtTail(tail, 154);
    InsertAtTail(tail, 5);
    InsertAtTail(tail, 410);
    InsertAtTail(tail, 50);

    // Find Largest element in Linkd list
    cout << "Largest Element is: " << LargestElement(head)<<endl;
}