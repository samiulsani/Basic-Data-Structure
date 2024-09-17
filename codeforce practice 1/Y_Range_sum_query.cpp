//After submit it Time limit will be shown in codeforce.so need to solve with prefix sum array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    while (y--)
    {
        int sum = 0;
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        for (int i = l; i <= r; i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }

    return 0;
}