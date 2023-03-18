#include<bits/stdc++.h>
#include"iostream"
#include"climits"
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxSum=INT_MIN, sum=0;
    for(int i=0; i<n; i++)
    {
        sum+= arr[i];

        if(sum<0)
        {
            sum=0;
        }
        maxSum=max(maxSum, sum);
    }
    cout<<maxSum;
    //O(N)
    return 0;
}