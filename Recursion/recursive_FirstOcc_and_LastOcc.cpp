#include<iostream>
using namespace std;

int FirstOcc(int arr[], int n, int i, int key)
{
    if(i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    
    return FirstOcc(arr, n, i+1, key);
}

int LastOcc(int arr[], int n, int i, int key)
{   
    int result = -1;    //base

    if(i<n-1)
    {
        result = LastOcc(arr, n, i+1, key);
    }

    if(result == -1)
    {    if (arr[i] == key)
        {
            return i;
        }

        else 
        {
            return -1;
        }
    }

    else
        return result;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cin>>key;

    cout<<FirstOcc(arr, n, 0, key)<<endl;
    cout<<LastOcc(arr, n, 0, key);
    return 0;
}