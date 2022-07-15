// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    
    vector<int> r{-1, 0, 1, 0};
    vector<int> c{0, 1, 0, -1};
    
    bool dfs(vector<vector<int>> &grid, int i, int j){
        int n = grid.size();
        int m = grid[0].size();
        if(i < 0 || i >= n || j < 0 || j >= m){
            return false;
        }
        if(grid[i][j] == 0){
            return false;
        }
        if(grid[i][j] == 2){
            return true;
        }
        grid[i][j]=0;
        for(int k = 0; k < 4; k++){
            if(dfs(grid, i + r[k], j + c[k]) == true){
                return true;
            }
        }
        return false;
    }
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && dfs(grid, i, j) == true){
                    return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends