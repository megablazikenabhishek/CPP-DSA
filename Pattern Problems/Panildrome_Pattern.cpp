#include<iostream>
using namespace std;

int main()
{
    int n,temp=1;
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<" ";
        }

        for(int l=temp; l>1; l--)
        {
            cout<<l;
        }

        for(int k=1; k<=temp; k++)
        {
            cout<<k;
        }
        temp++;
        cout<<endl;
    }
    return 0;
}