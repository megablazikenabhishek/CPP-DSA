#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int setBit(int n, int i)
{
    return n | (1<<i);
}

bool getBit(int n, int i)
{
    return !(n & (1<<i));   // if equal to zero then false
}

int unique(int arr[], int n)
{
    int result=0;

    for (int i = 0; i < 64; i++)
    {
        int sum=0;

        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
            
        }
        
        if (sum%3 == 0)
        {
            result = setBit(result, i);
        }
        
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        std::cin>>arr[i];
    }
    
    cout<<unique( arr, n);
    return 0;
}