#include <bits/stdc++.h>
using namespace std;

int main()
{
    // assign value in specific position
    //  vector<int> v = {1, 2, 3, 4, 5, 6};

    // v.insert(v.begin() + 1, 20);

    // for (int a : v)
    // {
    //     cout << a << " ";
    // }

    // assign another vector to a vector or specific position
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2 = {2, 3, 4, 5, 8};
    v.insert(v.begin() + 1, v2.begin(),v2.end());

    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}