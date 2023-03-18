#include<iostream>
using namespace std;

int main()
{
    int n;//arr[5]={5, 2, 8, 7, 6};
    cin>>n;
    int arr[n];

    for(int j=0; j<n; j++)
    {
        cin>>arr[j];
    }
    
    for(int k=1; k<=n-1; k++)
    {
        int flag=0;
        for(int i=0; i<=(n-k-1); i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                flag=1;
            }
        }   
        if(flag==0)
        {
            break;
        }
    }

   for(int l=0; l<n; l++)
    {
        cout<<arr[l]<<" ";
    }
    return 0;
}