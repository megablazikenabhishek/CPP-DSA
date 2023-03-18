#include"bits/stdc++.h"
using namespace std;

void merge_Count(int arr[], int l, int mid, int h, int*count)
{
    int n1= mid-l+1;
    int n2= h-mid;

    int left[n1];
    int right[n2];

    for (int  i = 0; i < n1; i++)
    {
        left[i] = arr[l+i];
    }
    
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[mid+1 + i];
    }
    
    int i=0;
    int j=0;
    int k=l;

    while (i<n1 && j<n2)
    {
        if(left[i]<right[j])
        {
            arr[k] = left[i];
            i++; k++;
        }

        else
        {
            arr[k] = right[j];
            j++; k++;
            //count part
            *count += n1-i;     //* required to acess data
        }
    }
    
    //exceptional conditions
    while (i<n1)
    {
        arr[k] = left[i];
        i++; k++;
    }
    
    while (j<n2)
    {
        arr[k] = right[j];
        j++; k++;
    }
}

void CountInversion(int arr[], int l, int h, int *count)
{
    if (l==h)
    {
        return ;    //base
    }
    
    if (l<h)
    {
        int mid = (l+h)/2;

        CountInversion(arr, l, mid, count);
        CountInversion(arr, mid+1, h, count);

        merge_Count(arr, l, mid, h, count);
    }
    
}

int main()
{
    int n=7, count=0;

    cin>>n;

    int *arr = new int [n];

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    CountInversion(arr, 0, n-1, &count);     //call by refrence

    cout<<count<<endl;

    return 0;
}