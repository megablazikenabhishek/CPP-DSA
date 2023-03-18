#include<iostream>
using namespace std;

void maxOrMini(int n1, int n2, int n3)
{
    if (n1>n2 && n1>n3)
    {
        cout<<"Maximum is\t"<<n1<<endl;

        if(n2>n3)
        cout<<"Minimum is\t"<<n3<<endl;

        else
        cout<<"Minimum is\t"<<n2<<endl;
    }

    else if (n2>n3)
    {
        cout<<"Maximum is\t"<<n2<<endl;
        cout<<"Minimun is\t"<<n1<<endl;
    }

    else
    {
        cout<<"Maximum is\t"<<n3<<endl;
        cout<<"Minimun is\t"<<n1<<endl;
    }
}

int main()
{
    int n1,n2,n3;

    cin>>n1>>n2>>n3;

    maxOrMini(n1,n2,n3); //calling
}