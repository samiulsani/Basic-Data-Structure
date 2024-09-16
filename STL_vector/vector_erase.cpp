#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Erase value from a specific position
    // vector<int> v = {1, 2, 3, 4, 5};
    // v.erase(v.begin() + 1);

    // for (int a : v)
    // {
    //     cout << a << " ";
    // }
    vector<int> v = {1, 2, 3, 4, 5};
    // v.erase(v.begin() + 1,v.begin()+3);
    //or we can use it
    v.erase(v.begin()+1,v.end()-2);

    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}