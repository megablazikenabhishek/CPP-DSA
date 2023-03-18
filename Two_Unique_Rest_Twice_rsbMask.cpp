#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n]={5, 2, 8, 5, 8, 1};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int Totalexor =0;
    for (int i = 0; i < n; i++)
    {
        Totalexor = Totalexor ^ arr[i];
    }

    cout<<Totalexor<<endl;
    
    int rsb = Totalexor & (- Totalexor);
    cout<<rsb<<endl;

    int x=0, y=0; 
    for (int i = 0; i < n; i++)
    {
        if((arr[i] & rsb) == 0)
        {
            x = x ^ arr[i];
        }

        else{
            y = y ^ arr[i];
        }   
    }
    cout<<x<<" "<<y;
    return 0;
}