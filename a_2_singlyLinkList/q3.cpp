// Find the middle of a Linked List
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
}

int count(Node *&head)
{
    Node *temp = head;
    int cnt = 1;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt - 1;
}

int findMiddle(Node *&head)
{
    Node *temp = head;
    for (int i = 0; i < (count(head)) / 2; i++)
    {
        temp = temp->next;
    }
    return temp->data;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtHead(head, 4);
    insertAtHead(head, 9);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    print(head);
    cout << endl;
    cout << count(head) << " " << findMiddle(head);
}