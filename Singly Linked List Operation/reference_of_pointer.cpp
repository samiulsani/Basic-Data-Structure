#include <bits/stdc++.h>
using namespace std;

void fun(int *&p) //reference value call using '&'
{
    p = NULL; //null means value 0
}

int main()
{
    int val = 10;
    int *ptr = &val; //pointer variable
    fun(ptr);
    cout << ptr << endl;

    return 0;
}