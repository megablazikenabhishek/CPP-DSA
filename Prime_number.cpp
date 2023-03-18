#include<iostream>
using namespace std;

int main()
{
    int n;
    
    bool flag=0;
    char check;

    do
    {
        cout<<"Enter the Number"<<endl;
        cin>>n;
        flag=0;
        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                cout<<"it's not Prime"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"it's Prime"<<endl;
        }
        cout<<"Press x to Continue"<<endl;
        cin>>check;    
    } while (check=='x' || check=='X' );
    return 0;
}
