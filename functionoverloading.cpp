//function overloading
#include<iostream>
 
using namespace std;

void sum(float first=0, float second=0)
{
        
        cout<<"sum of float is "<<first+second<<endl;
    
}

void sum(int first=0, int second=0)
{
        
        cout<<"sum of intger is "<<first+second<<endl;
    
}

void print();//declaring

int main()
{
    int a,b;
    float x,y;  

        cout<<"enter integers "<<endl;
        cin>>a>>b;  
        sum(a,b);//calling intger wala

        cout<<"enter float "<<endl;
        cin>>x>>y;
        sum(x,y);//calling float wala
        print();
    return 0;
}

void print()//declaring
{
        
        cout<<"just for no reason konichiwa"<<endl;
    
}
