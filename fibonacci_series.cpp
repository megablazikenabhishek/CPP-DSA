#include<iostream>
using namespace std;

void Fibonacci(int n)
{
    int t1=0,t2=1,nextnumber;
    cout<<"0,1,";
    for (int i = 1; i <= n; i++)
    {
        nextnumber=t1+t2;
        cout<<nextnumber<<",";
        t1=t2;
        t2=nextnumber;
    }
}

int main()
{
    int n;
    cin>>n;

    cout<<"The fibonacci seies is "<<endl;

    Fibonacci(n);
    return 0;
}