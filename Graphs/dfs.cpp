#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Graph{
    public: 
        unordered_map<int, bool> visited;
        unordered_map<int, list<int>> adj;
    
    void addEdge(int v, int w){
        adj[v].push_back(w);
    }

    void DFS(int v){
        // marking as true
        visited[v] = true;
        cout<<v<<" ";

        for(auto &i: adj[v]){
            if(!visited[i])
                DFS(i);
        }
    }
};

void solve(){
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.DFS(2);
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