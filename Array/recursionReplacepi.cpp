#include<iostream>
#include<string.h>
using namespace std;

void Replacepi(string s)
{
    if (s.length() == 0)
    {
        return ;    //base
    }

    if (s[0] == 'p' && s[1] == 'i') 
    {
        cout<<3.14;
        Replacepi(s.substr(2));
    }
    
    else
    {    cout<<s[0];
        Replacepi(s.substr(1));
    }
}

int main()
{
    string s;
    cin>>s;

    Replacepi(s);
    return 0;
}