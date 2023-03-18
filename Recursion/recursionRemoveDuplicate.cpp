#include<iostream>
#include<string.h>
using namespace std;

string RemoveDuplicate(string s)
{
    if (s.length() == 0)
    {
        return "";      //base
    }

    char chr= s[0];
    string ans= RemoveDuplicate(s.substr(1));

    if (chr == ans[0])
    {
        return ans;     //no need to change since repeating 
    }
    
    else
        return (chr+ans);     //change char is not repeating
}

int main()
{
    string s;
    cin>>s;

    cout<<RemoveDuplicate(s);
    return 0;
}