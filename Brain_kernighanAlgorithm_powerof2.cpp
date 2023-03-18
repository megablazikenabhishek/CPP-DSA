#include<iostream>
using namespace std;

bool powerof2(int n)
{
    if(n != 0)
    return !(n & n-1);  //if zero then true

    else
    return false;
}

int main()
{
    int n;
    cin>>n;

    if (powerof2(n))
    {
        cout<<"True "<<endl;
    }

    else
    {
        cout<<"False";
    }
    
    return 0;
}
