#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= sqrt(n); i++) //O(sqrt(N))
    {
        cout<<i<<endl;
    }

    //same as
    for (int i = 1; i*i <= n; i++) //O(sqrt(N))
    {
        cout<<i<<endl;
    }
    


    return 0;
}

//overall complexity O(sqrt(N)) - 10^14 - sqrt(10^14) - 10^7 mean 1sec - 10^7