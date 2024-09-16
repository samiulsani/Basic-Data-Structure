#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; //vector initializaiton
    // vector<int>v(5); // vector initializaiton with size
    // vector<int> v(5, 0); // vector initializaiton with size and value

    // vector<int>v2(5,100); // v2 vector is declare and copy to v vector
    // vector<int>v(v2);

    int a[6] = {1, 2, 3, 4, 5, 6}; // An array declare
    vector<int> v(a, a + 3);       // array value assign to the vector

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size() << endl;

    return 0;
}