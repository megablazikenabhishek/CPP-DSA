#include<iostream>
using namespace std;

int main()
{
    int n,revese,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int N=n;

    while(n>0)
    {
        int lastdigit=n%10;
        sum=sum*10+lastdigit;
        n/=10;
    }
    cout<<"The reversed number is "<<sum<<endl;

    return 0;
}