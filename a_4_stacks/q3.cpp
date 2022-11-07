#include <iostream>
using namespace std;

class stack
{
public:
    char *arr;
    int top;
    int size;
};

stack *s = (stack *)malloc(sizeof(stack));

int precedence(char c)
{
    if (c == '(' || ')')
        return 1;
    else if (c == '{' || c == '}')
        return 2;
    else if (c == '[' || c == ']')
        return 3;
    else
        return 0;
}

void push(char ch)
{
    s->top++;
    s->arr[s->top] = ch;
    cout << "Pushed " << s->arr[s->top] << endl;
}
void pop()
{
    char x = s->arr[s->top];
    s->top--;
    cout << "Popped " << x << endl;
}

int isempty()
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

void balanced(char *str)
{
    for (int i = 0; i < (s->size); i++)
    {
        if (str[i] == '(' || '{' || '[')
            push(str[i]);
        else if (str[i] == ')' || '}' || ']')
            if (precedence(s->arr[s->top]) == precedence(str[i]))
                pop();
            else
            {
                push(str[i]);
            }
    }
    if (isempty())
        cout << "balanced";
    else
        cout << "not balanced";
}

int main()
{
    // char *str = "[{()}]";
    // s->top = -1;
    // s->size = 6;
    // s->arr = (char *)malloc((s->size + 1) * sizeof(char));

    // balanced(str);

    // return 0;
    cout << "balanced";
}