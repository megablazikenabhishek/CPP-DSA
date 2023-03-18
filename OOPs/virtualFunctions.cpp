#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    virtual void fun()      //virtual will cause lateBinding(function will be call during runTime so pointer of the object will be known)
    {
        cout<<"Hello From A\n";
    }
};

class B : public A
{
    public:
    void fun()      //will automaticly be virtual      
    {
        cout<<"Hello From B\n";
    }
};

int main()
{
    A *ptr;
    B obj;
    //pointer of parent can point to child class
    ptr = &obj ;

    ptr->fun();    //-> is used to call using pointer

    return 0;
}