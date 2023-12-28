#include <iostream>
using namespace std;
#define n 100
class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void enqueue(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in the queue" << endl;
            return -1;
        }
        return arr[front];
    }
    bool isEmpty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
    bool isFull()
    {
        if (back == n - 1)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        for (int i = front; i <= back; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    int N, x;
    for (int i = 0; i < 6; i++)
    {
        cout << "What operation would you like to perform on this stack?\n1. enqueue()\n2. dequeue()\n3. isEmpty()\n4. isFull()\n5. display()\n6. peek()" << endl;
        cin >> N;
        switch (N)
        {
        case 1:
            cout << "What element do u want to enqueue?";
            cin >> x;
            q.enqueue(x);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            cout << q.isEmpty() << endl;
            break;
        case 4:
            cout << q.isFull() << endl;
            break;
        case 5:
            q.display();
            break;
        case 6:
            cout << q.peek() << endl;
            break;
        }
        q.display();
    }
}