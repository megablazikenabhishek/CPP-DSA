#include<iostream>
#include<algorithm>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c)
{
    int x,y,z;
    
    if(a>b && a>c)
    {
        x=a;
        y=b;
        z=c;
    }

    else if (b>c)
    {
        x=b;
        y=a;
        z=c;
    }

    else 
    {
        x=c;
        y=a;
        z=b;
    }

    if (x*x == y*y + z*z)
    {
        return true;
    }
    else
    return false;
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    if (check(x,y,z))
    {
        cout<<"It's a Pythagores Triplet";
    }
    else
    {
        cout<<"It's not a Pythagores Triplet";
    }
    return 0;
}