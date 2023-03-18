#include<iostream>
using namespace std;

string Replacex(string s)
{
    if (s.length() == 0)
    {
        return "";  //base
    }
    
    char chr = s[0];
    string ans = Replacex(s.substr(1));

    if (chr == 'x')
    {
        return ans+chr;
    }
    
    else
        return chr+ans;
}

int main()
{
    string s;
    cin>>s;

    cout<<Replacex(s);
    return 0;
}