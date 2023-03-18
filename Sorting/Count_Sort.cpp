#include<iostream>
#include<climits>
using namespace std;

void printArr(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
}

void Count_Sort(int arr[], int n)
{
    //declaring a count array
    int max_no = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_no = max(arr[i], max_no);
    }
    
    int count[max_no+1];

    //intilazing count with zero
    for (int i = 0; i < max_no+1; i++)
    {
        count[i] = 0;
    }
    
    //counting number of times an number appears
    for (int i = 0; i < n; i++)
    {
        count[arr[i]] ++;
    }
    
    //Modifing count to position
    for (int it = 1; it < max_no+1; it++)
    {
        count[it] = count[it] + count[it-1];
    }
    
    //For printing and traversing array from end
    int ans[n];

    for (int i = n-1; i >= 0; i--)
    {
        --count[arr[i]];  //decrementing  
        ans[count[arr[i]]] = arr[i];
    }
    
    //printing
    printArr(ans, n);
}

int main()
{
    int n;
    cin>>n;

    //allocate in heap
    int *arr = new int [n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    Count_Sort(arr, n);

    //deallocate array
    delete arr;
    arr = nullptr;
    return 0;    
}