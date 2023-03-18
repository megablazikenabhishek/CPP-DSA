#include<bits/stdc++.h>
using namespace std;

string decimalToHexa(int n)
{
    int x=1;
    string ans="";//Empty string

    while (x<=n)
    {
        x*=16;
    }
    x/=16;

    while (x>0)
    {
        int lastdigit=n/x;
        n-= lastdigit*x;
        x/=16;

        if(lastdigit<=9)
        {
            ans+=to_string(lastdigit);  //to_string convets integer into string
        }

        else
        {
            char temp = 'A' + lastdigit -10;    //eg. if lastdigit=12 so, 12-10=2   'A'+2 will be = char 'C"
            ans.push_back(temp);                //directly attaches char to string from back if temp='B'  and ans="32B" then ans="32BB"
        }
    }
    return ans;   
}

int main()
{
    int n;
    cin>>n;

    cout<<"HexaDecimal is value "<<decimalToHexa(n)<<endl;

    return 0;
}