//Floyd's numbers
#include<iostream>
 
using namespace std;

int main()
{
    int n;
    int floyd=1;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<floyd<<"\t";
            floyd++;
        }
        cout<<endl;
    }
    return 0;
}