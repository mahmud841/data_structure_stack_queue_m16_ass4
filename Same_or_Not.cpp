#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> mySt;
    queue<int> myQ;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mySt.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        myQ.push(val);
    }
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    // compare
    while (!mySt.empty() && !myQ.empty())
    {
        if (mySt.top() != myQ.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        mySt.pop();
        myQ.pop();
    }
    cout << "YES" << endl;

    return 0;
}
