//functions all in one
#include<iostream>
 
using namespace std;
 
 void print(int x)//declaring and defining
    {
        cout<<"your result is:\t"<<x<<endl;
    }

int sum(int x=0, int y=0)//declaring and defining also set default
    {
        int add=x+y;
        return add;
    }

int sub(int x=0, int y=0);//declaring also set default
   
int main()
    {
        int a,b,result;

        cout<<"\nenter a Number for Sum operation\n";
        cout<<"enter 1st Number\n";
        cin>>a;
        cout<<"enter 2nd Number\n";    
        cin>>b;
        result=sum(a,b);//calling
        print(result);//calling

        cout<<"\nenter a Number for Sub operation\n";
        cout<<"enter 1st Number\n";
        cin>>a;
        cout<<"enter 2nd Number\n";    
        cin>>b;
        result=sub(a,b);//calling
        print(result);//calling
        return 0;
    }
    
int sub(int x, int y)//defining but without default
{
     int minus=x-y;
        return minus;
}