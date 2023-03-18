#include<iostream>
using namespace std;

int32_t main()  //check out
{
    int n,m,key;
    cin>>n>>m>>key;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int r=0, c=m-1;
    bool flag=0;
    while(r<n && c>=0)
    {
        if (arr[r][c] == key)
        {
            flag=1;
        }
        
        if(arr[r][c] > key)
        {
            c--;
        }

        else{
            r++;
        }
    }

    if (flag)
    {
        cout<<"Element found "<<endl;
    }

    else
    cout<<"Not found "<<endl;
    
    return 0;
}