#include"iostream"
using namespace std;

int longestArithematic_Subarray(int arr[], int n)
{
    int curr_max=0, ans=0;
    int pd=arr[1]-arr[0];
    for(int i=0; i<n-1; i++)
    {
        int curr_cd=arr[i+1]-arr[i];

        if(pd == curr_cd)
        {
            curr_max++;
        }

        else if(pd != curr_cd)
        {
            pd=curr_cd;
            curr_max=1;
            curr_max++;
        }
        ans=max(ans,curr_max);
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) 
    {
        cin>>arr[i];
    }

    cout<<longestArithematic_Subarray(arr, n)<<endl;
    return 0;
}