#include<iostream>
using namespace std;

int Partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l-1;

    for (int j = l; j < h; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
        
    }
    
    swap(arr[i+1], arr[h]);
    return i+1;
}

void QuickSort(int arr[], int l, int h)
{
    if(l<h)
    {
        int pivot = Partition(arr, l, h);
        
        QuickSort(arr, l, pivot-1);
        QuickSort(arr, pivot+1, h);

    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    QuickSort(arr, 0, 4);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}