#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // O(N)
    {
        for (int j = 0; j < n; j++) // O(N) or O(M) if size M
        {
            cout << "hello" << endl;
        }
    }
    // over O(N*N)   ------ value will be 10^3
    return 0;
}