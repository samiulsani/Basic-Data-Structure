#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    vector<int> v;
    v=B;
    v.insert(v.end(),A.begin(),A.end());
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}