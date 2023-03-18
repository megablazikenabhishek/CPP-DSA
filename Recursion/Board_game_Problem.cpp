//Find n possible to reach end from start in game of dice
#include<iostream>
using namespace std;

int CountPath(int s, int e)
{
    if(s == e)
    {
        return 1;   //base
    }

    if (s>e)
    {
        return 0;   //out of range
    }
    
    int count =0;
    for (int dice = 1; dice <= 6; dice++)   //All possible value of dice
    {
        count += CountPath(s+dice, e);  
    }
    return count;
}

int main()
{
    int s,e;
    cin>>s>>e;

    cout<<CountPath(s, e);
    return 0;
}