#include<iostream>
using namespace std;

void Permutation (int arr[], int ans[], int n, int idk)
{
    if (n == 1)
    {
        ans[idk] = arr[0];      //base
        
        for (int i = 0; i < idk+1; i++)
        {
            cout<<ans[i]<<" ";
        }

        cout<<endl;
        return ;
    }
    
    for (int i = 0; i < n; i++)
    {
        ans[idk] = arr[i];

        if(1 == 1)
        {
            //condition 1
            if(i>0 && i<n-1)
            {
                int rest[n-1];
                for (int j = 0; j < i; j++)
                {
                    rest[j] = arr[j];
                }
                
                for (int k = i+1; k < n; k++)
                {
                    rest[k-1] = arr[k];
                }

                Permutation(rest, ans, n-1, idk+1);
            }

            //condition 2
            else if(i == 0)
            {
                int rest[n-1];
                for (int j = 1; j < n; j++)
                {
                    rest[j-1] = arr[j];
                }

                Permutation(rest, ans, n-1, idk+1);
            }

            //condition 3
            else
            {
                int rest[n-1];
                for (int j = 0; j < n-1; j++)
                {
                    rest[j] = arr[j];
                }
                
                Permutation(rest, ans, n-1, idk+1); 
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        ans[i] = -1;
    }

    cout<<"=================\nAll Permutations Are\n=================\n";
    Permutation(arr, ans, n, 0);

    return 0;
}