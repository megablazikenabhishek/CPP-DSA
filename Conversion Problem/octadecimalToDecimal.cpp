#include<iostream>
using namespace std;

int octaToDecimal(int n)
{
    int lastdigit,ans=0,temp=1;

    while (n>0)    
    {
       int lastdigit=n%10;
        ans+= lastdigit*temp;
        temp*=8;
        n/=10;
    }
    return ans;
}

int main ()
{
    int n;
    cin>>n;

    cout<<"Decimal value is "<<octaToDecimal(n)<<endl;
    return 0;
}