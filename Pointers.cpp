#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=10;
    int *aptr=&a;

    int b=20;
    int *bptr=&b;

    cout<<*aptr<<" "<<*bptr<<endl;
    *aptr=15 ;

    cout<<*aptr<<" "<<*bptr<<endl;

    //Pointer array

    int arr[3]={10, 20, 30};
    cout<<*arr<<endl;

    int *ptr=arr;
    cout<<++*ptr<<" "<<*(arr+2)<<endl;

    //pointer to pointer

    int c=10;
    int *ptr1=&c;
    int **ptr2=&ptr1;

    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
    cout<<**ptr2<<endl;
    return 0;
}