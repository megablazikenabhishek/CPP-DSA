#include<bits/stdc++.h>
using namespace std;

int DecimalToOcta(int n)
{
    int x=1,ans=0;

    while(x<=n)
    {
        x*=8;
    }
    x/=8;

    while (x>0)
    {
        int lastdigit=n/x;
        n-= lastdigit*x;
        ans=ans*10+lastdigit;
        x/=8;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<"OctaDecimal value is "<<DecimalToOcta(n);
    return 0;
}