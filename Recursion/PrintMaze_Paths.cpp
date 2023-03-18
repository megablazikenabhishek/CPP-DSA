#include<iostream>
using namespace std;

int MazePaths(int sr, int sc, int dr, int dc)
{
    if (sc == dc-1 && sr == dr-1)
    {
        return 1;
    }

    else if(sc >= dc || sr >= dr)
    {   
        return 0;
    }

    else if(sc<dc && sr<dr)
    {
       return MazePaths(sr+1, sc, dr, dc) + MazePaths(sr, sc+1, dc, dr);
    }
}

int main()
{
    int m, n;
    cin>>m>>n;

    std::cout<<MazePaths(0, 0, m, n);
    return 0;
}