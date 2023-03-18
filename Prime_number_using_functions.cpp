#include<iostream>
using namespace std;

bool Prime(int num)
{
    for (int i = 2; i < num-1; i++)
    {
       if (num%i==0)
       {
           return false;
       }
       
    }
    return true;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    for (int i = n1; i <= n2; i++)
    {
        if (Prime(i) && i!=1)               //no need to check if conidition works for true in default
        {
            cout<<"The number "<<i<<" is a Prime Number "<<endl;
        }
        
    }
    return 0;
}