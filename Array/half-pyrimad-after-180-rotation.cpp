//half pyrimad after 180 rotation
#include<iostream>
 
using namespace std;

int main()
{
    int n;

    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i-1; j++)
        {
            cout<<" ";
        }
        for(int k=i; k<=n; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}