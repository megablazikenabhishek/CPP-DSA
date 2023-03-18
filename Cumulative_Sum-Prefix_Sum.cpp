#include "iostream"
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

    int cum_sum[n+1];
    cum_sum[0]=0;
    for(int i=1; i<=n; i++)
    {
        cum_sum[i] = cum_sum[i-1] + arr[i-1];
    }

    int maxSum=INT_MIN;
    for(int i=1; i<=n; i++)
    {
        int sum=0;
        for(int j=0; j<i; j++)
        {
            sum = cum_sum[i] - cum_sum[j];
            maxSum = max(maxSum, sum);
        }
    }

    cout<<maxSum;
    return 0;
}