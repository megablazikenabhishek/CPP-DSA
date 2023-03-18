#include<iostream>
using namespace std;

int main()
{
    int n,sum;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>sum;

    int i=0,j=0,curr=0;

    while(j<n && curr<=sum)
    {
        curr += arr[j];
        j++;
    }
    j--;

    if(sum == curr)
    {
        cout<<i<<" "<<j;
        return 0;
    }
    else if(curr<sum)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    while(i<j)
    {
        if(curr>sum)
        {
            curr -= arr[i];
        }
        else if(sum == curr)
        {
            cout<<i<<" "<<j;
            return 0;
        }
        i++;
    }

    cout<<i<<" "<<j;
    return 0;
}