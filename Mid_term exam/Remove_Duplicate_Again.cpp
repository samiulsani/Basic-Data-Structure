#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        myList.push_back(val);
    }
    
    myList.sort();

    myList.unique();

    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
