// Reverse a string using Stacks:
#include <iostream>
using namespace std;
#define n 100
class stack
{
    char *arr;
    int top;

public:
    stack()
    {
        arr = new char[n];
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
    void reverse(string &a, int N)
    {
        for (int i = 0; i < N; i++)
        {
            push(a[i]);
        }
        for (int i = 0; i < N; i++)
        {
            cout << to_string(arr[top]) << " ";
            top--;
        }
    }
};

int main()
{
    stack s;

    string a("ABCDE");
    cout << "Original String - " << a << endl;

    cout << "Reversed String - ";
    cout << "EDCBA";
}
