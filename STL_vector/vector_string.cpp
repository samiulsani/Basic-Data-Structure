#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    for (string x : v)
    {
        cout << x << " ";
    }

    // or 2nd method

    // int n;
    // cin >> n;
    // vector<string> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // for (string x : v)
    // {
    //     cout << x << " ";
    // }

    return 0;
}