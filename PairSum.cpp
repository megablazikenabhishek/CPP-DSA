//for sorted array only
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int pairSum(int arr[], int n, int key)
{
    int low=0, high=n-1;

    while (low<high)
    {
        if(arr[low] + arr[high] == key)
        {
            cout<<low<<" "<<high;
            return 0;
        }

        else if(arr[low] + arr[high] < key)
        {
            low++;
        }

        else{
            high--;
        }
    }   
}

int main()
{
    int n;; 
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key; 
    cin>>key;

    pairSum(arr, n, key);
    return 0;
}