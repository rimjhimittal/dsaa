#include <iostream>
using namespace std;

#define n 100

class CircularQueue
{
    int *arr;
    int front;
    int back;

public:
    CircularQueue()
    {
        arr = new int[n];
        front = back = -1;
    }

    bool enqueue(int x)
    {
        if ((front == 0 && back == n - 1) || (back == (front - 1) % (n - 1)))
        {
            cout << "Queue is Full!";
            return false;
        }
        else if (front == -1)
        {
            front = back = 0;
            arr[back] = x;
        }
        else if (back == n - 1 && front != 0)
        {
            back = 0;
            arr[back] = x;
        }
        else
        {
            back++;
            arr[back] = x;
        }
        arr[back] = x;
        return true;
    }

    int dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
    }
};
int main()
{
}