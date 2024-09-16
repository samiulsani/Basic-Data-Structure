#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 3, 4, 5};
    auto it = find(v.begin(), v.end(), 2); //working on iterator vector<int>:iterator it;

    if (it == v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found";
    }

    return 0;
}