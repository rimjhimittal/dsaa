#include <iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow!";
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!";
            return;
        }
        top--;
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack Empty!" << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
    bool isFull()
    {
        if (top == n - 1)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    stack s;
    s.push(2);
    s.push(4);
    s.push(5);
    cout << "The given Stack is";
    s.display();
    int N, x;
    for (int i = 0; i < 6; i++)
    {
        cout << "What operation would you like to perform on this stack?\n1. push()\n2. pop()\n3. isEmpty()\n4. isFull()\n5. display()\n6. peek()" << endl;
        cin >> N;
        switch (N)
        {
        case 1:
            cout << "What element do u want to push?";
            cin >> x;
            s.push(x);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << s.isEmpty() << endl;
            break;
        case 4:
            cout << s.isFull() << endl;
            break;
        case 5:
            s.display();
            break;
        case 6:
            cout << s.peek() << endl;
            break;
        }
        s.display();
    }
}
