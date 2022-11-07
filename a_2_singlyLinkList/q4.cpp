// Reverse a linked list

#include <iostream>
using namespace std;

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

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *fwd = NULL;

    while (curr != NULL)
    {
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    print(prev);
    return prev;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insertAtHead(head, 7);
    insertAtHead(head, 9);
    insertAtHead(head, 5);
    cout << "Original linked list:";
    print(head);
    cout << "Reversed Linked List:";
    // after reversing
    reverse(head);
}