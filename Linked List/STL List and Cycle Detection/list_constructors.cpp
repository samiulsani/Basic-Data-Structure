#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;
    // list<int> myList(10);
    // cout<<myList.size()<<endl;

    // list<int> myList(10, 5);
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // list<int>list2={1,2,3,4,5};
    // list<int> myList(list2);
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    vector<int>v={10,20,30,40,50};
    list<int> myList(v.begin(),v.end());
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for(int val:myList)
    {
        cout<<val<<" ";
    }

    return 0;
}