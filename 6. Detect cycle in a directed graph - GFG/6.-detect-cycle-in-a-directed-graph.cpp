// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool DFSRec(vector<int> adj[],int s,bool visited[],bool dfsvisited[]){
     visited[s]=true;
     dfsvisited[s]=true;
     
     for(auto u:adj[s]){
         if(visited[u]==false&&DFSRec(adj,u,visited,dfsvisited)){
             return true;
         }
         else if(dfsvisited[u]==true){
             return true;
         }
     }
         dfsvisited[s]=false;
         return false;
 }
   // Function to detect cycle in a directed graph.
   bool isCyclic(int V, vector<int> adj[]) {
       // code here
       bool visited[V]={false};
       bool dfsvisited[V]={false};
       
       for(int i=0;i<V;i++){
           if(visited[i]==false)
            if(DFSRec(adj,i,visited,dfsvisited)==true){
                return true;
            }
       }
       return false;
       
   }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends