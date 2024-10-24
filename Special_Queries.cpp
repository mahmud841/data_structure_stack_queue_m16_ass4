#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    queue<string> counter_line;
    string result = " ";

    for (int i = 0; i < Q; i++)
    {
        int get_commands;
        cin >> get_commands;

        if (get_commands == 0)
        {
            // line a person add hobe
            string nm;
            cin >> nm;
            counter_line.push(nm);
        }
        else if (get_commands == 1)
        {
            // remove korbo
            if (!counter_line.empty())
            {
                result += counter_line.front() + '\n';
                counter_line.pop();
            }
            else
            {
                result += "Invalid\n";
            }
        }
    }
    cout << result;
    return 0;
}
