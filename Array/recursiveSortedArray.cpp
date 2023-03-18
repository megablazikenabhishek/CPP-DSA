#include<iostream>
using namespace std;

bool Sorted(int arr[], int n)
{
    if (n == 0 || n ==1)
    {
        return true;    //base case which is always true
    }
    
    return !(arr[0] > arr[1] && Sorted(arr+1, n-1));
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
    
    cout<<Sorted(arr, n);
    return 0;
}