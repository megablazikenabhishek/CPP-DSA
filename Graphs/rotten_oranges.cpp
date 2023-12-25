#include<bits/stdc++.h>
#define ll long long
using namespace std;

// based on breadth first search algo
int calculate(vector<vector<int>> &arr){
    int n = arr.size();
    int m = arr[0].size();
    
    queue<tuple<int, int, int>> bfs;
    vector<vector<int>> visited(n, vector<int>(m, 0));

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(arr[i][j]==2)
                bfs.push(make_tuple(i, j, 0)), visited[i][j] = 1;
    
    int maxi = INT_MIN;
    while(!bfs.empty()){
        int i, j, k;
        tie(i, j, k) = bfs.front();
        maxi = max(maxi, k);
        // cout<<i<<" "<<j<<" "<<k<<endl;
        bfs.pop();

        if(i+1<n && arr[i+1][j]==1 && !visited[i+1][j])
            bfs.push(make_tuple(i+1, j, k+1)), visited[i+1][j] = 1;
        if(j+1<m && arr[i][j+1]==1 && !visited[i][j+1])
            bfs.push(make_tuple(i, j+1, k+1)), visited[i][j+1] = 1;
        if(i-1>=0 && arr[i-1][j]==1 && !visited[i-1][j])
            bfs.push(make_tuple(i-1, j, k+1)), visited[i-1][j] = 1;
        if(j-1>=0 && arr[i][j-1]==1 && !visited[i][j-1])
            bfs.push(make_tuple(i, j-1, k+1)), visited[i][j-1] = 1;
    }

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(arr[i][j]==1 and visited[i][j]==0)
                return -1;

    return maxi==INT_MIN ? 0 : maxi;
}

void solve(){
    int n, m;
    cin>>n>>m;

    vector<vector<int>> arr(n, vector<int>(m));
    for(auto &i: arr)
        for(auto &j: i)
            cin>>j;

    cout<< calculate(arr);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);

#endif
    int t=1;
    // cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}