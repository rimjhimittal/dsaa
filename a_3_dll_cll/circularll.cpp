#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = this;
        this->prev = this;
    }
};

void insertNode(Node *&tail, Node *&head, int data)
{
    Node *n = new Node(data);
    {
        Node *temp = tail;
        while (temp->next != head)
        {
            temp = temp->next;
            tail = temp;
        }

        temp->next = n;
        n->next = head;
        // head->prev = n;
        // n->prev = tail;
        tail = n;
    }
}

void print(Node *&head)
{

    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp->prev != head);
}

int main()
{
    Node *node1 = new Node(20);
    Node *head = node1;
    Node *tail = node1;
    insertNode(tail, head, 100);
    insertNode(tail, head, 40);
    insertNode(tail, head, 80);
    insertNode(tail, head, 60);
    print(head);
    cout << "20";
}