#include<iostream>
using namespace std;

int Knapsack (int wt[], int value[], int space, int n)
{
    if (n==0 || space == 0)
    {
        return 0;   //base
    }
    
    if (wt[n-1] > space)
    {
        return Knapsack(wt, value, space, n-1);     //exclude
    }
    
    return max(Knapsack(wt, value, space-wt[n-1], n-1)+value[n-1] , Knapsack(wt, value, space, n-1));   //maximum of include and exclude
}

int main()
{
    int wt[] = {10, 20, 30};
    int value[] ={100, 50, 150};

    cout<<Knapsack(wt, value, 50, 3);
    return 0;
}