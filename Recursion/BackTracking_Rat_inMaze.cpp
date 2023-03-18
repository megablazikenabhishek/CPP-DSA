#include <iostream>
using namespace std;

bool isSafe(int **arr, int n, int x, int y)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }

    else
        return false;
}

bool RateinMaze(int **arr, int n, int x, int y, int **ans)
{
    if (x == n - 1 && y == n - 1)
    {
        ans[x][y] = 1;
        return true;
    }

    if (isSafe(arr, n, x, y))
    {
        ans[x][y] = 1;

        if (RateinMaze(arr, n, x + 1, y, ans))
        {
            return true;
        }

        if (RateinMaze(arr, n, x, y + 1, ans))
        {
            return true;
        }

        else
        {
            ans[x][y] = 0; // basktraking
            return false;
        }
    }

    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    // given array dynamic allocation
    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // ans array dynamic allocation
    int **ans = new int *[n];

    for (int i = 0; i < n; i++)
    {
        ans[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = 0;
        }
    }

    // result
    cout<<"================================\n";
    if (RateinMaze(arr, n, 0, 0, ans))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[i][j]<<" ";
            }cout<<endl;
        }
    }

    else
    {    
        cout<<"-1";
    }

    // deallocte arr
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    arr = nullptr;

    // deallocate ans
    for (int i = 0; i < n; i++)
    {
        delete[] ans[i];
    }

    delete[] ans;
    ans = NULL;

    return 0;
}