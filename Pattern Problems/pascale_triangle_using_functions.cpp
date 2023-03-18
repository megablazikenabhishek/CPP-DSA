//    1
//   1 1
//  1 2 1
// 1 3 3 1

#include<iostream>
using namespace std;

int factorial(int n)
{
    int ans=1;

    for(int i=n; i>0; i--)
    {
        ans*=i;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int space=1; space<(n-i); space++)
        {
            cout<<" ";
        }

        for(int j=0; j<=i; j++)
        {
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}