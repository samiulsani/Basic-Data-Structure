#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 50, 20, 0, 9};
    // myList.remove(2);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();

    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}