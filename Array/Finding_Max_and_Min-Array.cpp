#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,maxNo,minNo;
    cin>>n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    maxNo=array[0];
    minNo=array[0];

    for (int i = 0; i < n; i++)
    {
       if(array[i]>maxNo)
       maxNo=array[i];

       else if(array[i]<minNo)
       minNo=array[i];
    }
    
    cout<<maxNo<<" "<<minNo<<" ";
    return 0;
}