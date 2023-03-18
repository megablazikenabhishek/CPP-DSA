#include<iostream>
#include<string.h>
using namespace std;

bool Panildrome(string s)
{   
    bool flag;
        if (s[0] == s[s.length()-1])
        {
            if(s.length() - 2 > 1)
            {
                flag = Panildrome( s.substr( 1, s.length()-2 ) );   //substring function
                return flag;
            }

            else
            {
                return true;    //base
            }
        }
            
        else    
            return false;
}

int main()
{
    string s;
    std::cin>>s;

    std::cout<<Panildrome(s);
    return 0;
}