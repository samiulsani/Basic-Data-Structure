#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }
    // for (long long i = 0; i < n; i++)
    // {
    //     cout<<pre[i]<<" ";
    // }

    while (q--)
    {
        long long sum = 0;
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}