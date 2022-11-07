#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};

// traversing a linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node *&tail, Node *&head, int d)
{

    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // insert at Start
    if (position == 1)
    {
        insertAtHead(tail, head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at Last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node *&head)
{

    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(tail, head, 11);
    insertAtPosition(tail, head, 2, 102);
    insertAtTail(tail, head, 56);
    insertAtHead(tail, head, 17);
    insertAtPosition(tail, head, 2, 12);
    insertAtTail(tail, head, 526);
    insertAtHead(tail, head, 151);
    insertAtPosition(tail, head, 5, 2);
    insertAtTail(tail, head, 6);
    cout << "Given Linked List is:";
    print(head);
    for (int i = 0; i < 6; i++)
    {
        cout << "What operations would you like to perform\n1. Insertion at the beginning\n2. Insertion At the end.\n3. Insert at Position.\n4. Delete a specific node.\n5. Display all node values." << endl;
        int n, d, pos;
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "What element would you like to insert at head?" << endl;
            cin >> d;
            insertAtHead(tail, head, d);
            break;
        case 2:
            cout << "What element would you like to insert at the end?" << endl;
            cin >> d;
            insertAtTail(tail, head, d);
            break;
        case 3:
            cout << "What element would you like to insert?" << endl;
            cin >> d;
            cout << "Position?" << endl;
            cin >> pos;
            insertAtPosition(tail, head, pos, d);
            break;
        case 4:
            cout << "Position?";
            int p;
            cin >> p;
            deleteNode(p, head);
            break;
        case 5:
            print(head);
            break;
        default:
            print(head);
        }

        print(head);
    }
    return 0;
}