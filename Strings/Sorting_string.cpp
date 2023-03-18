#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());   //begin and ending Iterator

    cout<<s<<endl;
    return 0;
}
