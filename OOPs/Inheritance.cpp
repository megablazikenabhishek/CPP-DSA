#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class A 
{
    public:
    
    void fun()      
    {
        printf("Hello! from A\n");
    }
};//encapsulation

class B : public A      //class A protected and public attributes will become Public for B
{
    public:
    void fun()
    {
        printf("Hello! form B\n");
    }
};

class C : public A, public B        //ambiguity due to to times inherited
{
    public:
    void fun()
    {
        printf("Hello! form C\n");
    }
};
int main()
{
    A obj1;
    B obj2;
    C obj3;

    //call will be from respective function beacuse dataType of obj is known during complie time
    obj1.fun();
    obj2.fun();
    obj3.fun();

    //Dynamiclly allocate memory
    int *temp = new int();
    *temp = 2;

    cout<<temp<<" "<<*temp;
    return 0;
}