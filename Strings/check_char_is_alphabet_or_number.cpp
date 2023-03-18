#include<iostream>
using namespace std;

bool check(char c)
{
    if ((c>='A' || c>='a') && (c<='Z' || c<='z'))
    {
        return true;
    }

    else 
    return false;
}

int main()
{
    char c;
    cin>>c;

    if (check(c))
    {
        cout<<"It's an Alphabet "<<endl;
    }

    else
    cout<<"It's an Number"<<endl;
    
    return 0;
}