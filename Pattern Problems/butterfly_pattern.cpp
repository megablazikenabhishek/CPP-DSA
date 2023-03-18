#include<iostream>
using namespace std;

int main()
{
    int row1=4;
    int row2=0;

    for (int i=1; i<=4 ; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout<<"*";
        }

        for (int k=1; k<=(row1*2-1); k++)
        {
            cout<<" ";
        }
        row1--;

        for (int k=1; k<=i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    // for (int i=4; i>=1 ; i--)
    // {
    //     for (int j=1; j<=i; j++)
    //     {
    //         cout<<"*";
    //     }

    //     for (int k=1; k<=(row2*2+1); k++)
    //     {
    //         cout<<" ";
    //     }
    //     row2++;

    //     for (int k=1; k<=i; k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    return 0;
}
