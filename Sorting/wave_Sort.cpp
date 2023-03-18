#include<iostream>
using namespace std;

void waveSort(int arr[], int n)
{
    for (int i = 0; i < n; i+=2)
    {
        if (i>0 && arr[i]<arr[i-1])
        {
            swap(arr[i], arr[i-1]);
        }

        if (i<n-1 && arr[i] < arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    
    for (int  j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }cout<<endl;

}

int main()
{
    int n=7;
    // cin>>n;

    int arr[]={10, 90, 49, 2, 1, 5, 23};
    // for (int  i = 0; i < n; i++)
    // {
    //     std::cin>>arr[i];
    // }
    
    waveSort(arr, n);

    return 0;
}
