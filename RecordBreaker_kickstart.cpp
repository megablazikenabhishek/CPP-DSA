#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n+1];
    arr[n]=-1;  //to get always stasify n+1 condition for nth element

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }

    int ans=0,mx=-1;

    for(int i=0 ; i<n; i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
            mx=arr[i];
        }
    }
    cout<<ans<<endl;

    return 0;
}