#include <bits/stdc++.h>
using namespace std;

bool is_valid_function(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (!st.empty() && ((st.top() == '1' && c == '0') || (st.top() == '0' && c == '1')))
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    return st.empty();
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        if (is_valid_function(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
