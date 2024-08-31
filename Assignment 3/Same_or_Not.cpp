#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> stack_val;
    queue<int> queue_val;

    for (int i = 0; i < n; ++i)
    {
        int value;
        cin >> value;
        stack_val.push(value);
    }

    for (int i = 0; i < m; ++i)
    {
        int value;
        cin >> value;
        queue_val.push(value);
    }

    if (n != m)
    {
        cout << "NO";
    }
    else
    {
        while (!stack_val.empty() && !queue_val.empty())
        {
            if (stack_val.top() != queue_val.front())
            {
                cout<<"NO";
                return 0;
            }
            stack_val.pop();
            queue_val.pop();
        }

        cout<<"YES";
    }

    return 0;
}
