#include<iostream> 
using namespace std;

bool check(int n)
{
    if (n%2==0)
    {
        return true;
    }

    else 
    return false;
    
}

int main()
{
    int n;
    cin>>n;

    if(check(n))
    {
        cout<<"It's an even Number";
    }

    else{
        cout<<"It's an odd Number";
    }
    return 0;
}