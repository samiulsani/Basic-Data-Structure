#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int>v;
    // cout<<v.size()<<endl;
    // cout<<v.max_size()<<endl;
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    // v.clear();
    v.resize(7);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // cout << v.capacity() << endl;

    return 0;
}