//Max sunarray sum(cyclic) = total sum of array - sum of non-cintributing elements
#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n)
{
    int maxsum=INT_MIN;
    int sum=0;

    for(int i=0; i<n; i++)
    {
        sum+= arr[i];
        if(sum <0)
        {
            sum=0;
        }

        maxsum=max(maxsum, sum);
    }
    return maxsum;
}

int main()
{
    int n,TotalSum=0; 
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int wrapsum,nonwrapsum=kadane(arr, n);

    for(int i=0; i<n; i++)
    {
        TotalSum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapsum=TotalSum + kadane(arr, n);  //minus of minus = plus

    cout<<max(wrapsum, nonwrapsum);

    return 0;
}