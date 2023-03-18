#include<iostream>
using namespace std;

int biniaryToDecimal(int n)
{
    int lastdigit,ans=0,temp=1;

    while(n!=0)
    {
        lastdigit=n%10;
        ans+= lastdigit*temp;
        temp*=2;
        n/=10;
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;
    cout<<"Decimal value is "<<biniaryToDecimal(n)<<endl;

    return 0;
}