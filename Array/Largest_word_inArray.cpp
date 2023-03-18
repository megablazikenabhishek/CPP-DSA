#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();   //clear buffer  

    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int len=0;
    int maxlen=0;
    int st=0;
    for(int i=0; i<n; i++)
    {
        if (arr[i] != ' ')
        {
            len++;
        }
        else{
            len=0;
        }

        if (maxlen<len)
        {
            maxlen=len;
            st=i;
        }
    }

    cout<<maxlen<<endl;
    for(int i=st; i<=maxlen; i--)
    {
        cout<<arr[i];
    }
    return 0;
}