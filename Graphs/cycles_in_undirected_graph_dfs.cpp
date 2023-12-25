//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isCycle(int n, vector<int> adj[])
    {
        vector<int> visited(n, 0);

        function<bool(int, int)> recur = [&](int curr, int parent) -> bool
        {
            visited[curr] = 1;
            // cout<<curr<<" "<<parent<<endl;
            for (auto &i : adj[curr])
            {
                if (!visited[i])
                {
                    if (recur(i, curr))
                        return true;
                }
                else if (i != parent)
                {
                    return true;
                }
            }
            return false;
        };

        for (int i = 0; i < n; i++)
            if (!visited[i] and recur(i, -1))
                return true;
        return false;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
