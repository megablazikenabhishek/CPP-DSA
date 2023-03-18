//Time comlexity of O(N)
#include<iostream>
using namespace std;

void DNF_Sort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;

    while (mid<high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        
        if (arr[mid] == 1)
        {
            mid++;
        }
        
        if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>*(arr+i);
    }
    
    DNF_Sort(arr, n);

    return 0;
}