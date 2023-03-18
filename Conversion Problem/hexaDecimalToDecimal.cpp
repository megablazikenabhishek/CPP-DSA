#include<bits/stdc++.h>
using namespace std;

int hexaDecimalToDecimal(string n)
{
    int ans=0,temp=1;
    int s=n.size();

    for(int i=s-1; i>=0; i--)
    {
        if (n[i]>='0' && n[i]<='9')
        {
            ans+= temp*(n[i]-'0');      //It converts every charater of string to ASCII and then manipulates
            //eg. ASCII of '5' is 53 and '0' is 48 so 53-48 will give 5 in integer
        }

        else if(n[i]>='A' && n[i]<='F')
        {
            ans+= temp*(n[i]-'A'+10);   //same as above
        }
        temp*=16;
    }
    return ans;
}

int main()
{
    string s;
    cin>>s;

    cout<<"Decimal value is "<<hexaDecimalToDecimal(s)<<endl;
    return 0;
}