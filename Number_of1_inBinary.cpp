#include<iostream>
using namespace std;

int numberof1(int n)
{
    int i=0;

    while (n != 0)
    {
        n=n & n-1;
        i++;
    }
    return i;
}

int main()
{
    int n;
    cin>>n;

    cout<<numberof1(n);
    return 0;
}