//Time Complexity is O(log n to base 2)
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int s=0;
    int e=n;

    while(s<=e)
    {
        int mid=(s+e)/2;

        if(arr[mid]==key)
        {
            return mid;
        }

        else if (arr[mid]>key)
        {
            e=mid-1;
        }

        else
        {
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int key,arr[5]={2,4,8,10,12};

    cin>>key;

    cout<<BinarySearch(arr, 5, key)<<endl;
    return 0;
}