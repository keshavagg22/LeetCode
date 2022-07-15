// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int np=0;
    int vis[101]={0};
    void fun(int src,int dst, vector<int>adj[])
    {
        
        if(src==dst)
        {
            np++;
            return;
        }
        vis[src]=1;
        for(auto x:adj[src])
        {
            if(!vis[x])
            {
                fun(x,dst,adj);
            }
        }
        vis[src]=0;
    }
    
int countPaths(int V, vector<int> adj[], int source, int destination)
    {
        // Code here
        fun(source,destination,adj);
        return np;
        
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}  // } Driver Code Ends