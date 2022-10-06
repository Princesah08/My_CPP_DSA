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
 
int LLsum(Node *head){
    Node *temp = head;
    int sum=0;
    while(temp!=NULL){
        sum+=temp->data;
        temp=temp->next;
    }
    return sum;
}

int main()
{
    // Dynamically create A node
    Node *Node1 = new Node(10);
    Node *head = Node1;
    Node *tail = Node1;
    // Insert 10 at the tail
    InsertAtTail(tail, 10);
    InsertAtTail(tail, 10);
    InsertAtTail(tail, 10);
    InsertAtTail(tail, 10);

    // Sum of Element in Linked list
    cout<<"Sum : "<<LLsum(Node1)<<endl;
}