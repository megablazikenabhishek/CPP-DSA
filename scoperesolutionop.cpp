//scope resolution operator
#include<iostream>
 
using namespace std;

int a=32;//global variable

int main()
{
    int a=10;//local variable
        cout<<"local value \n"<<a;    
        cout<<"\nglobal value \n"<<::a<<endl;//scope resolution operator    
    return 0;
}