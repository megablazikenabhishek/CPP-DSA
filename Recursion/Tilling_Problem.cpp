#include<iostream>
using namespace std;

int Tilling (int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }
    
    return Tilling(n-1) + Tilling(n-2);
}

int main()
{
    int n;
    cin>>n;

    cout<<Tilling(n);
    return 0;
}