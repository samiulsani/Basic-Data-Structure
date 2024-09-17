#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;

        int L = 0;
        int R = n - 1;
        bool flag = false;

        while (L <= R)
        {
            int mid = (L + R) / 2;
            if (x == a[mid])
            {
                flag = true;
                break;
            }
            else if (x > a[mid])
            {
                L = mid + 1;
            }
            else
            {
                R = mid - 1;
            }
        }

        if (flag == true)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}