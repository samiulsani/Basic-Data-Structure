#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i = i * 2) //O(logN)
    {
        cout << i << endl;
    }
    for (int i = 1; i <= n; i = i / 2) //O(logN)
    {
        cout << i << endl;
    }

    return 0;
}

//Division or multiplication thakle O(logN) - value will be 10^18
//value will be for 1 sec - 10^5  and for 2ssec - 10^6