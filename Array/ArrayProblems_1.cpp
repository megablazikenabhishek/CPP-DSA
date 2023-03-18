#include<iostream>
using namespace std;

int main()
{
    int n; 
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int maxNo=arr[0];
    for(int i=0; i<n; i++)
    {
        maxNo=max(maxNo , arr[i]);
        cout<<"Max of index "<<i<<" "<<maxNo<<endl;
    }

    return 0;
}