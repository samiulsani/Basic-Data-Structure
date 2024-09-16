#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // O(N)
    {
        int x = i;
        while (x > 0) // O(log(N))
        {
            int digit = x % 10;
            cout << digit << " ";
            x = x / 10;
        }
        cout << endl;
    }

    return 0;
}

// overall complexity O(Nlog(N)) ---