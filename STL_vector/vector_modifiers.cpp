#include <bits/stdc++.h>
using namespace std;

int main()
{

    //vector assign value to another vector
    // vector<int> v1 = {1, 2, 3};
    // vector<int> v2 = {2, 4, 6};
    // v1 = v2;

    //push value on vector and also pop
    vector<int>v;
    v.push_back(10);       
    v.push_back(20);       
    v.push_back(30);       
    v.pop_back();

    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}