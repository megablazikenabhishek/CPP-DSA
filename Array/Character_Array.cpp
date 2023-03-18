#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0;
    cin>>n;

    char arr[n+1];  //extra element for null character
    cin>>arr;
    char a[5]="JOHN";   //Or {'J' , 'O' , 'H' , 'N'}
    cout<<strlen(a)<<endl;

    while (arr[i] != '\0')
    {
        cout<<arr[i];
        i++;
    }

    return 0;
}