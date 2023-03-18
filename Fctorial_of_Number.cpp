#include<iostream>
using namespace std;

int main()
{
    int n,fact=1;
    cout<<"Enter the Number "<<endl;
    cin>>n;

    for (int i = n; i > 0; i--)
    {
        fact*=i;
    }

    cout<<"The factorial is "<<fact;
    return 0;
}