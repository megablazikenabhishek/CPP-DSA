//spaced rectangle
#include<iostream>
 
using namespace std;

int main()
{
    int row,column;

    cin>>row>>column;

    for(int i=1; i<=row; i++)
    {
        if(i==row || i==1)
       {
            for(int j=1; j<=column; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }

        else
        {
            for(int k=1; k<=column; k++)
            {
               if(k==column || k==1)
               {
                   cout<<"*";
                }

               else
               {
                   cout<<" ";
                }

            }
            cout<<endl;
        }

    }
    return 0;
}  