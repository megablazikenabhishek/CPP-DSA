#include"bits/stdc++.h"
using namespace std;

int FRIENDS(int n)
{
    if(n == 2)
    {
        return 2;   //base
    }

    if(n == 1)
    {
        return 1;   //base
    }

    return FRIENDS(n-1) + (n-1) * FRIENDS(n-2);
}

int main()
{
    int n;
    cin>>n;

    cout<<FRIENDS(n);

    return 0;
}