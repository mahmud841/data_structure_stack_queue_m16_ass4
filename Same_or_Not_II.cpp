#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int sz;

public:
    Stack(int n)
    {
        arr = new int[n]; // Dynamic
        top = -1;
        sz = n;
    }

    void push(int val)
    {
        if (top < sz - 1)
        {
            arr[++top] = val;
        }
    }

    int pop()
    {
        if (top >= 0)
        {
            return arr[top--];
        }
        return -1;
    }
    bool is_empty()
    {
        return top == -1;
    }
};

class Queue
{
public:
    int *arr;
    int front, rear, sz, cty;

public:
    Queue(int n)
    {
        arr = new int[n];
        front = 0;
        rear = -1;
        sz = 0;
        cty = n;
    }

    // Enqueue element into the queue
    void push(int val)
    {
        if (sz < cty)
        {
            rear = (rear + 1) % cty;
            arr[rear] = val;
            sz++;
        }
    }

    int pop()
    {
        if (sz > 0)
        {
            int val = arr[front];
            front = (front + 1) % cty;
            sz--;
            return val;
        }
        return -1;
    }

    bool is_empty()
    {
        return sz == 0;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    Stack stack(n);
    Queue queue(m);

    // for stack
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        stack.push(val);
    }

    // for queue
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        queue.push(val);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    // Compare
    while (!stack.is_empty() && !queue.is_empty())
    {
        if (stack.pop() != queue.pop())
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}
