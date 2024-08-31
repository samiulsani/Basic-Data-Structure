#include <bits/stdc++.h>
using namespace std;

void ticket_counter(int q)
{
    queue<string> line;
    while (q--)
    {
        int num;
        cin >> num;

        if (num == 0)
        {
            string name;
            cin >> name;
            line.push(name);
        }
        else if (num == 1)
        {
            if (!line.empty())
            {
                cout << line.front() << endl;
                line.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
}

int main()
{
    int q;
    cin >> q;
    ticket_counter(q);
    return 0;
}
