#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void intLeaveQue(queue<int> &q)
{

    if (q.size() % 2 != 0)
        cout << "You have entered odd number of elements!." << endl;

    stack<int> s;
    int halfSize = q.size() / 2;

    for (int i = 0; i < halfSize; i++)
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    for (int i = 0; i < halfSize; i++)
    {
        q.push(q.front());
        q.pop();
    }

    for (int i = 0; i < halfSize; i++)
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(3);
    q.push(1);
    q.push(4);

    intLeaveQue(q);
    int length = q.size();
    for (int i = 0; i < length; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
}
