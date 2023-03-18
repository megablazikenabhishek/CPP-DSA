#include<iostream>
using namespace std;

int unique(int arr[], int n)
{
    int xorSum=0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];   //xor of number with itself is zero
    }
    return xorSum;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<unique(arr, n);
    return 0;
}