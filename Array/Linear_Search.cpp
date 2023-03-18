#include<iostream>
using namespace std;

int Linear_Search(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5]={5,65,98,55,21};
    int key;

    cin>>key;
    cout<<Linear_Search(arr, 5, key)<<endl;
}