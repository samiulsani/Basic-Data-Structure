#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 5};
    // myList.clear();
    // myList.resize(3);
    cout << myList.size() << endl;
    cout << myList.max_size() << endl;
    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}