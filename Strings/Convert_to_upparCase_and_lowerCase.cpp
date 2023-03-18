#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

//'a'-'A' = 32;
int main()
{
    string s;
    cin>>s;

    //upperCase
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i] -= 32;
    }
    cout<<s<<endl;

        //OR
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s<<endl;


    //lowerCase
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>='A' and s[i]<='Z')
        {
            s[i] += 32;
        }
    }
    cout<<s<<endl;

        //OR
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;

    return 0;
}