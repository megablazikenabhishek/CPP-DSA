#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Graph {
    private:
        int n;
        vector<int> visited;
        vector<vector<int>> adj;
    
    public:
        Graph(int n){
            this->n = n;
            this->visited.resize(n, 0);
            this->adj.resize(n);
        }

        void addEdge(int a, int b){
            adj[a].push_back(b);
        }

        void BFS(int start){
            queue<int> q;
            q.push(start);

            while(!q.empty()){
                int curr = q.front();
                if(!visited[curr])
                    cout<<curr<<" ";
                q.pop();
                this->visited[curr] = 1;

                for(auto &i: this->adj[curr]){
                    if(!visited[i]){
                        cout<<i<<" ";
                        q.push(i);
                        this->visited[i] = 1;
                    }
                }
            }
        }
};

void solve(){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.BFS(2);
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
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}