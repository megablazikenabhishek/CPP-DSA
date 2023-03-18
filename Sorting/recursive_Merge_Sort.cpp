#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int h)
{
    //sepreate and save
    int n1 = mid-l+1;
    int n2 = h-mid;

    int a1[n1];
    int a2[n2];

    for (int i = 0; i < n1; i++)
    {
        a1[i] = arr[l+i];
    }
    
    for (int i = 0; i < n2; i++)
    {
        a2[i] = arr[mid + 1 + i];
    }
    
    //sorting and merging
    int i=0;
    int j=0;
    int k=l;

    while (i<n1 && j<n2)
    {
        if (a1[i] < a2[j])
        {
            arr[k] = a1[i];
            k++;   
            i++;
        }
        
        else
        {
            arr[k] = a2[j];
            j++;
            k++;
        }
    }
    
    //exceptional cases
    while (i<n1)
    {
        arr[k] = a1[i];
        k++;   
        i++;
    }
    
    while (j<n2)
    {
        arr[k] = a2[j];
        j++;
        k++;;
    }
}

void Mergesort(int arr[], int l, int h)
{
    
    if (l==h)
    {
        return;     //base
    }

    if(l < h)
    {
        int mid = (l + h)/2;

        Mergesort(arr, l, mid);
        Mergesort(arr, mid+1, h);

        merge(arr, l, mid, h);
    }
}

int main()
{
    int n=6;
    // cin>>n;

    // int *arr = new int [n];

    int arr[] = {5, 6, 7, 8, 1, 3};

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    Mergesort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}