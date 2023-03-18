#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,sum=0,lastdigit;
    cin>>n;
    int original=n;

    while (n>0)
    {
        lastdigit=n%10;
        sum+=round(pow(lastdigit,3));
        n/=10;
    }

    if (sum==original)
    {
        cout<<"Its an Amstrong Number "<<endl;
    }
    else
    {
        cout<<"Its not an Amstrong Number "<<endl;
    }
    
    return 0;
}