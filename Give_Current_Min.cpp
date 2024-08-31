#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> min;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        min.push(x);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int c;
        cin >> c;

        if (c == 1)
        {
            if (min.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << min.top() << endl;
            }
        }
        else if (c == 2)
        {
            if (!min.empty())
            {
                min.pop();
            }
            if (min.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << min.top() << endl;
            }
        }
        else if (c == 0)
        {
            int x;
            cin >> x;
            min.push(x);
            cout << min.top() << endl;
        }
    }

    return 0;
}
