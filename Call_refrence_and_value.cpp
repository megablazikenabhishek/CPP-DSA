#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swapbyValue(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}

void swapbyrefrence(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    //1. call by value
    int a=10;
    int b=20;

    swapbyValue(a, b);
    cout<<a<<" "<<b<<endl;

    //2. call by referance

    swapbyrefrence(&a, &b);
    cout<<a<<" "<<b<<endl;
    
    return 0;
}