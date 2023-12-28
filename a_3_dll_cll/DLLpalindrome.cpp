// check if a DLL of characters is palindrome or not
#include <iostream>
using namespace std;

class Node
{
public:
    char data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

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

bool isPalindrome(Node *&head)
{
    if (left == NULL)
        return true;

    // Find rightmost node
    Node *right = head;
    while (right->next != NULL)
        right = right->next;

    while (head != right)
    {
        if (head->data != right->data)
            return false;

        head = head->next;
        right = right->prev;
    }

    return true;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    insertAtTail(tail, head, 'A');
    insertAtTail(tail, head, 'B');
    insertAtTail(tail, head, 'A');
    insertAtTail(tail, head, 'B');
    insertAtTail(tail, head, 'A');
    cout << "List:";
    print(head);
    cout << "IsPalindome:" << isPalindrome(head);

    insertAtTail(tail, head, 'A');
    insertAtTail(tail, head, 'C');
    insertAtTail(tail, head, 'A');
    insertAtTail(tail, head, 'B');
    insertAtTail(tail, head, 'A');
    cout << endl;
    cout << "List:";
    print(head);
    cout << "IsPalindome:" << isPalindrome(head);
}