#include<iostream>
#include<string.h>
using namespace std;

void Permutation(string s, string ans)
{
    if (s.size() == 0)
    {
        cout<<ans<<endl;
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        char chr = s[i];

        string rest = s.substr(0, i) + s.substr(i+1);   //here second parameter is length if not second parameter then considerd till last 

        Permutation(rest, ans+chr);
    }
}

int main()
{
    string s;
    cin>>s;

    Permutation(s, "");
    return 0;
}