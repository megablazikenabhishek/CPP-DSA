#include<iostream>
#include<string>
using namespace std;

void Reverse(string s)
{
    if(s.length() != 0)
    {
        string rest = s.substr(1);
        Reverse(rest);
    }

    else
        return ;
    
    cout<<s[0];
}

int main()
{
    string s;
    cin>>s;

    Reverse(s);
    return 0;
}