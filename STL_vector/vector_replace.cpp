#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 3, 4, 5, 2, 2, 2, 2, 2, 2};
    replace(v.begin(), v.end(), 2, 100);

    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}