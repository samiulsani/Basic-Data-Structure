#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 50, 20, 0, 9};

    cout << myList.front() << endl;
    cout << myList.back() << endl;
    cout << *next(myList.begin(), 3);

    return 0;
}