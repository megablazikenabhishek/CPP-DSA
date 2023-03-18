#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    const int N= 1e2+2; // contraints all are less than 1e6
    int idk[N];
    for(int i=0; i<N; i++)
    {
        idk[i]=-1;
    }
    int mindx=INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(idk[arr[i]] != -1)
        {
          mindx=min(mindx, idk[arr[i]]);
          break;
        }

        else{
            idk[arr[i]]=i;
        }
    }

    if(mindx == INT_MAX)
    cout<<"-1"<<endl;

    else
    cout<<mindx<<endl;
    
    return 0;
}