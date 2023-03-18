#include<iostream>
using namespace std;

void swap(int,int);//declaring

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    swap(n1,n2);//calling 

    return 0;
}

void swap(int x,int y)//defining
{
    int temp;

    temp=x;
    x=y;
    y=temp;
    cout<<"swaped value is\t"<<x<<"\t"<<y;
}