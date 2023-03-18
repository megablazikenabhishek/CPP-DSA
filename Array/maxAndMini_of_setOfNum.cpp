#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    sort(s.begin(), s.end(), greater<int>());
    cout<<"Largest possible Number is "<<s<<endl;

    cout<<"Smallest possible Number is ";
    for (int i = s.length()-1; i >= 0; i--)
    {
        cout<<s[i];
    }
    return 0;
}