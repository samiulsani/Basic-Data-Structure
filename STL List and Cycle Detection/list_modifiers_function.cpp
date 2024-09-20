#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 5};
    // list<int> newList;
    // newList = myList; // assign list
    // or 2nd method
    // newList.assign(myList.begin(), myList.end());

    // push head and tail
    // myList.push_back(100);
    // myList.push_front(0);

    // pop or delete head and tail
    // myList.pop_back();
    // myList.pop_front();

    // insert value at position
    //  myList.insert(next(myList.begin(),7),100);
    // myList.insert(next(myList.begin(), 1), {100, 200, 300});
    // list<int>newList={10,20,30,40};
    // myList.insert(next(myList.begin(),2),newList.begin(),newList.end());

    // Erase value at position
    //  myList.erase(next(myList.begin(),2));
    //  myList.erase(next(myList.begin(),2),next(myList.begin(),4));

    // replace any value
    // replace(myList.begin(), myList.end(), 1, 10);

    // Find any value
    auto it = find(myList.begin(), myList.end(), 6);
    if (it == myList.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }


    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}