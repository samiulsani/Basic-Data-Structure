#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            myList.push_front(v);
        }

        else if (x == 1)
        {
            myList.push_back(v);
        }
        
        else if (x == 2)
        {
            if (v < myList.size())
            {
                myList.erase(next(myList.begin(), v));
            }
        }

        cout << "L -> ";
        for (auto it = myList.begin(); it != myList.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;

        list<int> myList_2(myList);
        myList_2.reverse();
        cout << "R -> ";
        for (auto it = myList_2.begin(); it != myList_2.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}