#include<iostream>
#include<string.h>
using namespace std;

void PowerSet(string s, int i, string curr)
{
    if(i == s.length())
    {
        cout<<curr<<endl;
        return ;
    }

    PowerSet(s, i+1, curr+s[i]);
    PowerSet(s, i+1, curr);
}

int main()
{
    string s;
    cin>>s;

    PowerSet(s, 0, "");
    return 0;
}