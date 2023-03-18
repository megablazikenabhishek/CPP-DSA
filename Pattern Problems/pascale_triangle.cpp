#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int coep=1;
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }

        for(int k=1; k<=i; k++)
        {
           cout<<coep<<" ";
           coep=coep*(i-k)/k;
        }
        cout<<endl;
    }
    return 0;
}
