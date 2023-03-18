#include<iostream>
using namespace std;

bool check(int age)
{
    if(age>=18)
    {
        return true;
    }

    else 
    return false;
}

int main ()
{
    int age;
    cin>>age;

    if (check(age))
    {
        cout<<"You are Eligible to Vote"<<endl;
    }

    else
    cout<<"You are not Eligible to Vote"<<endl;
    
    return 0;
}