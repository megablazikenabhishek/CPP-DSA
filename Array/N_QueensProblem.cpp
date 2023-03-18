#include <iostream>
using namespace std;

bool isQueen_Safe(int **arr, int x, int y, int n)
{
    if (x == 0)
    {
        return true;
    }

    // left Digonal
    int row = x - 1;
    int col = y - 1;
    // for (int row = x-1, int col = y-1; row>=0 && col>=0; row --, col--)
    // {
    //     if (arr[row][col] == 1)
    //     {
    //         return false;    //java xD
    //     }

    // }
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    // right Digonal
    row = x - 1;
    col = y + 1;
    // for (int row = x-1, int col = y+1; row >= 0 && col < n; row--, col++)
    // {
    //     if (arr[row][col] == 1)
    //     {
    //         return false;
    //     }
    // }
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }

    // straight Down
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }
    // while (row <= 0)
    // {
    //     if (arr[row][col] == 1)
    //     {
    //         return false;
    //     }
    //     row--;
    // }

    return true;    //if all case false then Queen is Safe
}

void NQueen(int **arr, int r, int n)
{
    if (r == n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j]<<" ";
            }cout<<endl;
        }

        cout<<"========\n";

        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (isQueen_Safe(arr, r, col, n) == true)
        {
            arr[r][col] = 1;
            NQueen(arr, r + 1, n);
            arr[r][col] = 0; // backtracing
        }
    }
}

int main()
{
    int n=4;
    // cin >> n;

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    

    NQueen(arr, 0, n);

    // deallocate arr
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    arr = NULL;

    return 0;
}